#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    int T = 0, P = 0, D = 0;
    for(int i = 0; i < n; i++)
    {
      scanf("%d %d", &a, &b);
      if(a>b)
      {
        T++;
      }
      if(a<b)
      {
        P++;
      }
      if(a==b)
      {
        D++;
      }
    }
    if(T>P)
    {
       printf("Tiger\n");
    }
    if(T<P)
    {
      printf("Pathan\n");
    }
    if(T==P)
    {
        printf("Draw\n");
    }
    return 0;
}