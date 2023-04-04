#include<stdio.h>
int main()
{
  int i, n;
  scanf("%d", &n);
  for(i = 0;i <= n; i++)
  {
    printf("%d After ten time for break\n", i);
    if(i == 10){
      break;
    }
  }
  return 0;
}