#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  char empty[100] = "still-looking-good";
  char name[16];

  if (argc < 2) {
    printf("You need to write your name\n");
    return -1;
  }

  strcpy(name, argv[1]);
    
  printf("Your name is %s\n", name);
  printf("Check stack %s\n", empty);
  return 0;
}
