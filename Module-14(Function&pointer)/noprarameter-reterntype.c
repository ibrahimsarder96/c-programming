#include<stdio.h>
int sub(){
  int a,b;
  scanf("%d %d", &a, &b);
  int sub = a - b;
  return sub;
}
int main()
{
  int ans = sub();
  if(ans>0)
  {
    printf("%d", ans);
  }
  else{
    printf("It is not positive number");
  }
    return 0;
}