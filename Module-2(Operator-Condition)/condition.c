#include<stdio.h>
int main()
{
  int examResult;
  scanf("%d",& examResult);
  if(examResult <= 100 && examResult >= 80){
    printf("He/She Result: A+", examResult);
  }
  else if(examResult < 80 && examResult > 69){
    printf("He/She Result: A", examResult);
  }
  else if(examResult < 70 && examResult > 59){
    printf("He/She Result: A-", examResult);
  }
  else if(examResult < 60 && examResult > 49){
    printf("He/She Result: B", examResult);
  }
  else if(examResult < 50 && examResult > 39){
    printf("He/She Result: C", examResult);
  }
  else if(examResult < 40 && examResult >= 33){
    printf("He/She Result: D", examResult);
  }
  else if(examResult <= 32 && examResult >= 0){
    printf("He/She Result: F", examResult);
  }
  else{
    printf("He/She is Undefined", examResult);
    return 0;
  }
}