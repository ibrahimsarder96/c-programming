#include<stdio.h>
int main()
{
    int a, b, c;
    long long int d;
    scanf("%d%d%d%lld",&a,&b,&c,&d);
     long long int A = a + b * c;
     long long int B = a - b + c;
     long long int C = a * b - c;
    if(A==d)
    {
      printf("YES");
    }
    else if(B==d)
    {
       printf("YES");
    }
    else if(C!=d){
        printf("NO");
    }
    return 0;
}