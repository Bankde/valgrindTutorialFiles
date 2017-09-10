#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getName(char **name) {
  char *_name = "DefaultName";
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
