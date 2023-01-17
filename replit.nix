{ pkgs }: {
	deps = [
		pkgs.valgrind-light
  pkgs.valgrind-light
  pkgs.valgrind
  pkgs.valgrind --leak-check=full --track-origins=yes ./a
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}