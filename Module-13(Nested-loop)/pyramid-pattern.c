#include<stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= s; j++) // space print er loop----
      {
        printf(" ");
      }
      for(int j = 1; j <= k; j++) // repeat work er loop----
      {
        printf("*");
      }
      s--;  // space minus minus korte hobe----
      k=k+2; // star 2 plus plus kore-----
      printf("\n");
    }
    return 0;
}