#include<stdio.h>
#include<string.h>
int main()
{
     char len[100];
     scanf("%s", &len);
      /* length of string uses built in function -------
     int st = strlen(len); // built in function-------------
     printf("%d", st);
     */
    // for loop uses string length------------
     int count = 0;
     for(int i = 0; len[i] != '\0'; i++)
     {
        count++;
     }
      printf("%d", count);
    return 0;
}