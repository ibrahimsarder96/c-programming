#include<stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s=0;
    k=n*2;
    for(int i = 0; i <= n; i++)
    {
      for(int j = 0; j <= s; j++) // space print er loop----
      {
        printf(" ");
      }
      for(int j = 0; j <= k; j++) // repeat work er loop----
      {
        printf("*");
      }
      s++;  // space minus minus korte hobe----
      k=k-2; // star 2 plus plus kore-----
      printf("\n");
    }
    return 0;
}