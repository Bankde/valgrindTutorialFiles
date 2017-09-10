#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  char *name = malloc(sizeof(char)*strlen(argv[1]) + 1);
  strcpy(name, argv[1]);
  int i;
  for (i = 0; i < strlen(argv[1]); i++) {
    if (name[i] == ' ') {
      name = name + i + 1;
      break;
    }
  }
  if (i >= strlen(argv[1])) {
    free(name);
    exit(-1);
  }
  printf("Your lastname is %s\n", name);
  free(name);
  return 0;
}
