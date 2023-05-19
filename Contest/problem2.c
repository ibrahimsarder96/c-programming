#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c && 0<a && 0 < b && 0 < c){
      printf("Yes");
    }
    else{
       printf("No");
    }
    return 0;
}