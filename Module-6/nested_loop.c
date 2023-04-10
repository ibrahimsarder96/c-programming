#include<stdio.h>
int main()
{
   for(int i = 1; i <= 5; i++)
   {
     for(char j = 'a'; j <= 'z'; j++){
      printf("%c ", j);
    }
    printf("\n");
    for(char u = 'A'; u <= 'z'; u++){
      printf("%c ", u);
    }
    printf("\n");
   }
    return 0;
}