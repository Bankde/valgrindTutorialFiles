#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  char *name = calloc(sizeof(char)*20, 1);
  strcpy(name, argv[1]);
  printf("Your name is %s\n", name);
  return 0;
}
