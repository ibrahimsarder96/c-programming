#include<stdio.h>
int main()
{
    int n, k=6;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= k; j++) // repeat work-------
      {
        printf("*");
      }
      k--; // k er value minus minus korte hobe----------
      printf("\n"); // joto bar kaj toto bar new line print---------
    }
    return 0;
}