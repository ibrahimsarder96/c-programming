#include<stdio.h>
int main()
{
    int n, k=1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= k; j++) // repeat work-------
      {
        printf("*");
      }
      k++; // k er value plus plus korte hobe----------
      printf("\n"); // joto bar kaj korbe---------
    }
    return 0;
}