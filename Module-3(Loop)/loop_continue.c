#include<stdio.h>
int main()
{
  int i, n;
  scanf("%d", &n);
  for(i = 0;i <= n; i++)
  {
    if(i == 5){
      continue;
          printf("%d\n", i);
    }
  }
  return 0;
}