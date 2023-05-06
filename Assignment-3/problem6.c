#include<stdio.h>
void change(float *a)
{
   *a = 5.55;
}
int main()
{
    float v = 2.55;
    printf("%.2f\n", v);
    change(&v);
    printf("%.2f\n", v);
    return 0;
}