
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s", &s);
    int size = strlen(s), cnt=0;
    for(int i=0; i<size; i++)
    {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        cnt++;
      }
    }
    printf("%d", cnt);
    return 0;
}