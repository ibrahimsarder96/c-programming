#include <stdio.h>
int main()
{
  int n;
  double x;
  x = 10.5;
  n = (int)x;
  printf("value of n = %d\n", n);
  printf("value of n = %0.1lf\n", x);
  return 0;
}