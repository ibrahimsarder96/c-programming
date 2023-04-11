#include<stdio.h>
int main()
{
    int a, b, c;
    long long int d;
    scanf("%d%d%d%lld",&a,&b,&c,&d);
    if(a<d){
      long long int d = a + b * c;
      printf("Yes");
    }
    else if(a>d){
      long long int d = a - b + c;
       printf("Yes");
    }
    else if(a == d){
        long long int d = a * b - c;
        printf("No");
    }
    return 0;
}