
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // minimum number check
    if(a <= b && a <= c){
      printf("%d ", a);
    }
    else if(b <= a && b <= c){
      printf("%d ", b);
    }
    else{
      printf("%d ", c);
    }
    // maximum number check
    if(a >= b && a >= c){
      printf("%d", a);
    }
    else if(b >= a && b >= c){
      printf("%d", b);
    }
    else{
      printf("%d", c);
    }
    return 0;
}