{ pkgs, ... }:

pkgs.devShell.mkShell {
  name = "tree-sitter-klipper";

  packages = with pkgs; [
    tree-sitter
    nodejs
  ];
}
