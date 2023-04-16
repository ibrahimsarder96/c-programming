#include<stdio.h>
int main()
{
    // array and stirng er size ber kora holo below
    char c[9];
    int arr[7];
    int sz = sizeof(c)/sizeof(char);
    int siz = sizeof(arr);
    printf("%d\n", sz);
    printf("%d\n", siz);
    
    // akdik string print
    char name[7];
    for(int i = 0; i < 7; i++)
    {
      scanf("%c", &name[i]);
    }
    for(int i  = 0; i < 7; i++)
    {
       printf("%c\n", name[i]);
    }
    return 0;
}