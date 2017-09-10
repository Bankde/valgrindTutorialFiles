#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getMark(int *score) {
  if (1) { //somehow always error
    return -1;
  }
  *score = 100;
  return 0;
}

int main(int argc, char** argv) {
  int score;
  getMark(&score);
  if (score > 50) printf("pass\n");
  else printf("fail\n");
  return 0;
}
