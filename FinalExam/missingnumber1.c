#include<stdio.h>
int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%d %d %d %d", &a, &b, &c, &d);
      printf("%d\n", a - (b + c + d));
    }
    return 0;
}