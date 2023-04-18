#include<stdio.h>
#include<string.h>
int main()
{
  // input take it gets----------
  /*
    char name[14];
    gets(name);
    printf("%s", name);
    */
  // input take it fgets-------
    char name[15];
    fgets(name, 15, stdin);
    printf("%s", name);
    return 0;
}