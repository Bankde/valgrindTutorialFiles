#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  size_t size = -1;
  char *name = malloc(size);
  strcpy(name, argv[1]);
  printf("Your name is %s\n", name);
  free(name);
  return 0;
}
