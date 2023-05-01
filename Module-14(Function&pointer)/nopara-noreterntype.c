#include<stdio.h>
// No parameter & No Return----------type
void div(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  int div = a/b;
  printf("%d\n", div);
}
int main()
{
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
     div();
  }
    return 0;
}