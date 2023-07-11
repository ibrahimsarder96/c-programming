#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];  
    for(int i = 1; i <= n; i++){
      scanf("%d", &ar[i]);
    } 
    int check;
    scanf("%d", &check);
    for(int i = 1; i <= n; i++){
      if(ar[i]==check){
         printf("%d ", i);
      }
      if(ar[i]!=check){
         printf("Not Found ");
      }
      // else{
      //   printf("%d ", i);
      // }
    } 
    return 0;
}