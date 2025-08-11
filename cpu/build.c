#include <stdio.h>
#include <stdlib.h>

main() {
  printf("\033[32mrebuilding\033[0m lxc8\n");
  system("gcc cpu/cpu.c -o lxc8 --std=c89");
  printf("\033[32mrebuilding\033[0m build\n");
  system("gcc cpu/build.c -o build --std=c89");
}
