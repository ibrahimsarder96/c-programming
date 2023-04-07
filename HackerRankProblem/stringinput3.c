#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a;
    char str[200];
    char str[500];
    scanf("%c", &a); 
    scanf("%[^\n]%*c", str); 
    scanf("%[^\n]%*c",str);

    printf("%c\n",a);
    printf("\n%s", str);
    printf("%s",  str);
    return 0;
}