#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a;
    char st[200];
    char str[500];
    scanf("%c", &a); 
    scanf("%[^\n]%*c", st); 
    scanf("%[^\n]%*c",str);

    printf("%c\n",a);
    printf("\n%s", st);
    printf("%s",  str);
    return 0;
}