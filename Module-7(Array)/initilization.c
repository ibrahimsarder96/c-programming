#include<stdio.h>
int main()
{
    int ar[5] = {2, 4, 5, 6, 3};
    // int ar[5] = {2}; // decler na korle baki sob zero hobe
    for(int i = 0; i < 5; i++)
    {
      printf("%d\n", ar[i]);
    }
    return 0;
}