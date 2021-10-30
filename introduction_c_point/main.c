#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{
  int a = 10;
  int* p = &a;
  int** q = &p;
  int*** r = &q;

  printf("The value of a is %d\n", a);

  ***r = 20;

  printf("The address of p is %p\n", p);
  printf("The address of q is %p\n", q);
  printf("The address of r is %p\n", r);
  printf("The value of a is %d\n", a);
  return 0;
}
