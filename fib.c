#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*static unsigned long long cache[256] = {0};*/

// cache[0]
// cache[1]
//
/*unsigned long long fib(unsigned int n)*/
/*{*/
  /*if (n <= 1)*/
    /*return n;*/

  /*return fib(n-2) + fib(n-1);*/
/*}*/

/*unsigned long long fib(unsigned int n)*/
/*{*/
  /*if (n <= 1)*/
    /*return n;*/

  /*if (cache[n-1] == 0)*/
    /*cache[n-1] = fib(n - 1);*/
  /*if (cache[n-2] == 0)*/
    /*cache[n-2] = fib(n - 2);*/

  /*return cache[n-2] + cache[n-1];*/
/*}*/

unsigned long long fib(unsigned int n)
{
  unsigned long long x = 0; // n-2
  unsigned long long y = 1; // n-1
  unsigned long long tmp = 0;

  if (n <= 1)
    return n;

  for (unsigned int i = 1; i < n; i++)
  {
    tmp = x;
    x = y;
    y = x + tmp;
  }
  return y;
}

/*
How do I represent a number that is greater
than the largest number that my computer can
represent using a primitive data type?

1. research
2. data structures -> different way smaller problem

218922995834555169026
                                       |10^1|10^0|
                                       |  10|   1|
|2|1|8|9|2|2|9|9|5|8|3|4|5|5|5|1|6|9| 0|   2|   6|

 100
+010
----
 110


*/


int main(int argc, char *argv[])
{
  /*assert(fib(0) == 0);*/
  /*assert(fib(1) == 1);*/
  /*assert(fib(2) == 1);*/
  /*assert(fib(3) == 2);*/
  /*assert(fib(4) == 3);*/
  /*assert(fib(12) == 144);*/
  /*assert(fib(25) == 75025);*/
  /*assert(fib(49) == 7778742049);*/
  /*assert(fib(50) == 12586269025);*/
  /*assert(fib(99) == 218922995834555169026);*/
  /*getchar();*/
  for (int i = 0; i < 50; i++) {
    printf("%3d: %20llu\n", i, fib(i));
  }
  printf("YAY!\n");
  return 0;
}

// no cache: real    3m21.146s
// cache:    real     0m0.001s
