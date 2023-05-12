#include<stdio.h>
#include<stdio.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int Capital = 0, Small = 0, Spaces = 0;
    for(int i = 0; i < strlen(s); i++)
    {
    if(s[i]>= 'a' && s[i]<= 'z')
    {
      Small++;
    }
    if(s[i]>= 'A' && s[i]<= 'Z')
    {
      Capital++;
    }
    if(s[i]== ' ')
    {
      Spaces++;
    }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", Capital, Small, Spaces);
    return 0;
}