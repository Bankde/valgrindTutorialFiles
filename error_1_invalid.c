#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void doSomething() {
  return;
}

int main(int argc, char** argv) {
  char *name = calloc(sizeof(char)*20, 1);
  doSomething();
  free(name);
  doSomething();
  strcpy(name, argv[1]);
  printf("Your name is %s\n", name);
  return 0;
}
