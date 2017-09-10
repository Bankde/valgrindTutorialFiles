#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkString(char *name) {
  return -1; // always return false, for demo
}

int checkName(char *name) {
  if (checkString(name) == -1) {
    free(name);
    return -1;
  }
  return 0;
}

int main() {
  char *name = malloc(sizeof(char)*20);
  strcpy(name, "Bank");
  if (checkName(name) == 0) {
    printf("My name is %s\n", name);
  }
  free(name);
  return 0;
}
