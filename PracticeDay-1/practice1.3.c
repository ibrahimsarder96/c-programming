#include<stdio.h>
int main()
{
  int a, checkValue;
     scanf("%d", & a);
    if(a < 0){
      printf("please a positive number");
  }
  else{
  checkValue = a % 2;
  if(checkValue == 0){
    printf("This is Even Number");
  }
  else{
    printf("This is Odd Number");
  }
  }
}