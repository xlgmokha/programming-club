#include <stdio.h>
#include <assert.h>

// 1. base case -> ends the loops
// 2. recurrence
int fib(int n)
{
  if (n <= 1) {
    printf("%d: %d + %d = %d\n", n, n, n + n);
    return n;
  }

  int y = fib(n - 2);
  int x = fib(n - 1);
  printf("%d: %d + %d = %d\n", n, x, y, x+y);

  return x + y;
}

int main(int argc, char *argv[])
{
  assert(fib(-2) == 0);
  assert(fib(-1) == 0);
  assert(fib(0) == 0);
  assert(fib(1) == 1);
  assert(fib(2) == 1);
  assert(fib(3) == 2);
  assert(fib(4) == 3);
  assert(fib(12) == 144);

  printf("%d\n", fib(100));

  printf("YAY!\n");
  return 0;
}
