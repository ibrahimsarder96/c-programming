#include<stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    int per = 100 - x;
    double total = 100 * p;
    double previousprice = total/per;
    printf("%0.2lf", previousprice);
    return 0;
}
