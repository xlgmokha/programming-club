#include <stdio.h>

int main(int argc, char *argv[])
{
  char name[3];

  name[0] = 'm';
  name[1] = 'o';
  name[2] = '\0';

  printf("%s", name);

  return 0;
}
