#include<stdio.h>
int main()
{
  int a, checkValue;
  if(a >= 0)
  {
     scanf("%d", & a);
  }
  checkValue = a % 2;
  if(checkValue == 0){
    printf("This is Even Number");
  }
  else{
    printf("This is Odd Number");
  }
}