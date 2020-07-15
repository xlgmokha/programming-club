#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char bike_rack[8];
  for (int i = 0; i < 8; i = i + 1)
  {
    bike_rack[i] = '\0'; // NULL -> nothing
  }

  // rack: [0, 1, 2, 3]
  // mo: 'm'
  // om: 'o'
  // bo: 'b'
  // yo: 'y'

  bike_rack[0] = 'm';
  /*bike_rack[1] = 'o';*/
  /*bike_rack[2] = 'b';*/
  bike_rack[3] = 'y';

  for (int i = 0; i < 8; i = i + 1)
  {
    int bike = bike_rack[i];
    printf("bike rack slot %d: %c\n", i, bike);
  }

  printf("\n");
  return 0;
}

// 1. compile: c -> machine
// 2. run: machine -> os
