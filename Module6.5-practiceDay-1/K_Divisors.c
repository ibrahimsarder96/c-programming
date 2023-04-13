#include<stdio.h>
int main()
{
    int n;
    
    for(int i = 1; i <=n; i++){
      scanf("%d", &n); 
      int total = n%i ==0;
     printf("%d\n", total);
    }
     
    return 0;
}