#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &ar[i]);
    }
    int arr[1] = {0};
    for(int i = 0; i < n; i++)
    {
    if (arr[0] < ar[i]) {
      arr[0] = ar[i];
    }
    }

    for(int i = 0; i < n; i++)
    {
    int sub = arr[0] - ar[i];
    printf("%d ", sub);
    }
    return 0;
}