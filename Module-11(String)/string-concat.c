#include<stdio.h>
#include<string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", &a, &b);
    char k = strlen(a);
    // full string copy korte--------strlen
    for(int i = 0; i < strlen(a); i++)
    {
      a[k]=b[i];
      k++;
    }
    // single string copy korte condition dile hobe
    // for(int i = 0; i < 1; i++)
    // {
    //   a[k]=b[i];
    //   k++;
    // }
    a[k]='\0';
    printf("%s %s", a, b);
    return 0;
}