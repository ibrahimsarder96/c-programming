#include<stdio.h>
void farenheittocelcius(int n)
{
  int celcius = (n-32) * 5/9;
  printf("%d C", celcius);
}
int main()
{
    int n;
    scanf("%d", &n);
    farenheittocelcius(n);
    return 0;
}