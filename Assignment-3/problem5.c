#include <stdio.h>
#include <string.h>
  
int  is_palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    int flag = 0;
    while (h > l)
    {
        if (str[l++] == str[h--])
        {
            flag=1;
        }
    }
    return flag;
}
  
int main()
{
    char s[11];
    scanf("%s", s);
    int flag = is_palindrome(s);
    if(flag==0){
      printf("Not Palindrome\n");
    }
    else{
      printf("Palindrome\n");
    }
    return 0;
}