#include<stdio.h>
void change(float *x)
{
   *x = 5.55;
}
int main()
{
    float a = 2.55;
    printf("%.2f\n", a);
    change(&a);
    printf("%.2f\n", a);
    return 0;
}