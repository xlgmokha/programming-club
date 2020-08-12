#include <stdio.h>
#include <assert.h>

int fib(int n)
{
  if (n == 1) {
    return 0;
  }

  if (n == 2 || n == 3) {
    return 1;
  }

  return 2;
}

int main(int argc, char *argv[])
{
  assert(fib(1) == 0);
  assert(fib(2) == 1);
  assert(fib(3) == 1);
  assert(fib(4) == 2);


  printf("YAY!\n");
  return 0;
}
