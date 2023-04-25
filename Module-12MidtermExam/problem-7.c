#include<stdio.h>
int main()
{
    int arr[26] = {0};
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
      /* code */
      arr[ch - 'a']++;
    }
    for(int i = 'a'; i <= 'z'; i++)
    {
      printf("%c - %d\n", i, arr[i - 'a']);
    }
    return 0;
}