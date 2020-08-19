#include <stdio.h>
#include <assert.h>

// data type
// unsigned int -> 0 -> (4294967296 - 1)
// int  (-2147483648) --> (2147483648 - 1)
// long -> 8 byte integer

// 18446744073709551616
// 1. base case -> ends the loops
// 2. recurrence
int fib(int n)
{
  if (n <= 1) {
    /*printf("%d: %d + %d = %d\n", n, n, n + n);*/
    return n;
  }

  int y = fib(n - 2);
  int x = fib(n - 1);
  /*printf("%d: %d + %d = %d\n", n, x, y, x+y);*/

  return x + y;
}

int main(int argc, char *argv[])
{
  /*printf("%d\n", sizeof(int));*/
  /*int x = 2147483648 - 1;*/

  /*assert(fib(-2) == 0);*/
  /*assert(fib(-1) == 0);*/
  /*assert(fib(0) == 0);*/
  /*assert(fib(1) == 1);*/
  /*assert(fib(2) == 1);*/
  /*assert(fib(3) == 2);*/
  /*assert(fib(4) == 3);*/
  /*assert(fib(12) == 144);*/
  /*assert(fib(25) == 0);*/
  /*assert(fib(30) == 0);*/
  /*assert(fib(35) == 0);*/
  /*assert(fib(36) == 0);*/
  assert(fib(50) == 0);

  /*printf("%d\n", fib(100));*/

  printf("YAY!\n");
  return 0;
}

// 1 bytes => 8 bits
// 4 bytes => 32 bits
//
//
//5
/**
35: 5702887 + 3524578 = 9227465


36: 9227465 + 5702887 = 14930352

*/


