#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a >= 'a' && a <= 'z'){
      // lowareCase
      int ans = a - 32; // int value (ans)
      printf("%c", ans); // print korte hobe char value
    }
    else
    {
      int ans = a + 32;  // int value (ans)
      printf("%c", ans);  // print korte hobe char value
    }
    return 0;
}