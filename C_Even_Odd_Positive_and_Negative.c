#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int even=0, odd=0, pos=0, neg=0;
    for(int i = 1; i <= n; i++){
      // work------------
      scanf("%d", &a);
      if(a%2==0){
        even++;     //count even number
      }
      else{
        odd++;      //count odd number
      }
      if(a>0){
        pos++;      //count positive number
      }
      else if(a<0){
        neg++;      //count negative number
      }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    return 0;
}