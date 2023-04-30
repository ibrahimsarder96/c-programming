#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int a[n]; //array size-----
    for(int i = 0; i < n; i++)  
    {
      scanf("%d", &a[i]); // array value input-----
    }
    for(int i = 0; i < n - 1; i++)
    {
      // ascending sort--------------
      /*
      for(int j = i + 1; j < n; j++)
      {
        if(a[i]>a[j])
        {
          int tmp = a[i];
          a[i]=a[j];
          a[j]=tmp;
        }
      }
      */
     // Descending sor-------------
      for(int j = i + 1; j < n; j++)
      {
        //  printf("%d %d\n", a[i], a[j]); compare bujte hole ai line print kore dekte hobe
        if(a[i]<a[j])
        {
          int tmp = a[i];
          a[i]=a[j];
          a[j]=tmp;
        }
      }
    }
    for(int i = 0; i < n; i++)
    {
      printf("%d ", a[i]);
    }
    return 0;
}