#include<stdio.h>
int main(int *a, int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("%d ", a[i]);
  }
}
int mul()
{
    int n, a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
  {
    scanf("%d", &a[n]);
    printf("%d ", a[i]);
  }
    mul(a,n);
    return 0;
}