#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &i);
    }
    for(int i = 0; i < n; i++)
    {
      if(i>0)
      {
        count++;
        printf("%d ", i);
      }
      else if(i<0)
      {
        count++;
        //  printf("%d\n", i);
      }
    }
    int zero = count / n;
    // printf("%d ", count);
    return 0;
}