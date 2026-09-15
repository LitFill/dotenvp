{
  description = "dotenv parser in koka";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    {
      self,
      nixpkgs,
      flake-utils,
      ...
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs { inherit system; };
      in
      {
        packages.default = pkgs.stdenv.mkDerivation {
          pname = "dotenvp";
          version = "0.0.4";
          src = ./.;
          nativeBuildInputs = with pkgs; [
            koka
          ];
          buildPhase = ''
            mkdir -p $out/bin
            koka -o $out/bin/dotenvp main.kk
            chmod +x $out/bin/dotenvp
          '';
          dontInstall = true;
        };
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            koka
          ];
        };
      }
    );
}
