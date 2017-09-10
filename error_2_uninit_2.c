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
  getMark(&score);//why you no check error
  printf("Your score is %d\n", score);
  return 0;
}
