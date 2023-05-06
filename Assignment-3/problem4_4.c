#include<stdio.h>
void kilometerstometers(void){
  int n;
  scanf("%d", &n);
  int meters = n * 1000;
  printf("%d kilometers - %d meters", n,meters);
}
int main()
{
    kilometerstometers();
    return 0;
}