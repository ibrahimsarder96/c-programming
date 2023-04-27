#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], min = 0, max = 0;
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
      min = min + arr[i];
    }
    for(int i = 1; i < n; i++)
    {
      max = max + arr[i];
       printf("%d\n",max);
    }
      printf("%d %d", min, max);
    return 0;
}