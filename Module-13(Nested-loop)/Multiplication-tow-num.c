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
    
    int v; 
    scanf("%d", &v);
    int flag = 0;   // flag 0 hole No print korbe  r 1 hole YES print korbe
    for(int i = 0; i < n - 1; i++) // outer loop n-1 projonto salte hobe
    {
        for(int j = i + 1; j < n; j++) // inner loop i+1 theke suru korte hobe----
      {
        if(a[i]*a[j]==v) // flag use "yes" or "No" print korar jonno-------
        {
          flag = 1;
        }
      }
    }
  if(flag==0) // condition use-------
  {
    printf("NO\n");
  }
  else{
    printf("YES\n");
  }
    return 0;
}