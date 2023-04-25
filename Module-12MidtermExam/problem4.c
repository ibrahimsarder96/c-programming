
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    int s=0, c=0;
    while(scanf("%c", &ch) != EOF)
    {
      if(ch >= 'a' && ch <= 'z')
      {
        s++;
      }
      else{
        c++;
      }
    }
    printf("%d %d", c, s);
    return 0;
}