#include <stdlib.h>
#include <stdio.h>

main() {
  puts("\033[32mrebuilding\033[0m lxc8");
  system("gcc cpu/cpu.c -o lxc8 --std=c89");
  puts("\033[32mrebuilding\033[0m build");
  system("gcc cpu/build.c -o build --std=c89");
}
