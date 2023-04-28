#include<stdio.h>
#include<string.h>
int main()
{
  // built function compare string--------------
  // condition type:
  // 1. two string same output = 0;
  // 2. fist string big then second string output = any positive value not zero;
  // 3. second string big then fist string output = any Negative value not zero;
     char a[100], b[100];
     scanf("%s  %s", a, b);
     int v = strcmp(a,b);
     printf("%d", v);
    return 0;
}