#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  int age;
  int happiness; // 0 sad, 100 happy
} Person;

void slide(Person *person)
{
  person->happiness += 10;
}

// pass by value
// pass by reference
int main(int argc, char *argv[])
{
  Person *mo = malloc(sizeof(Person));
  mo->age = 36;
  mo->happiness = 70;

  printf("Before: age(%d), happiness(%d)\n", mo->age, mo->happiness);

  slide(mo);

  printf("After: age(%d), happiness(%d)\n", mo->age, mo->happiness);
}
