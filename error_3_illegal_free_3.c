#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkString(char *name) {
  return -1; // always return false, for demo
}

int getName(char **name) {
  char *_name = malloc(10);
  strcpy(_name, "Hello");
  if (checkString(_name) == -1) {
    free(_name);
    return -1;
  }
  *name = _name;
  return 0;
}

int main() {
  char *name;
  if (getName(&name) == 0) {
    printf("My name is %s\n", name);
  }
  free(name);
  return 0;
}
