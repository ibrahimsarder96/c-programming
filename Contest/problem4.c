#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = (n+1)/2;
    for(int i = 1; i <= n; i++)
    {
      if(n==1){
         printf("#"); 
      }
      for(int j = 1; j <= n-1; j++)
      {
        if(s==j){
           printf("#"); 
        }
        if(s==i){
           printf("#"); 
        }
        else{
          printf("*");
        }
      }
      printf("\n");
    }
    return 0;
}