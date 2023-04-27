#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
      int sub = a-b;
      printf("%d", sub);
    }
    else if(a<b)
    {
      printf("0");
    }
    else if(a==b)
    {
      printf("0");
    }
    return 0;
}