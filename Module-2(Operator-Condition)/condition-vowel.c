//Alphabet Search vowel---------
#include<stdio.h>
int main()
{
  char vowel;
  scanf("%c",& vowel);
  if(vowel == 'a' || vowel == 'e' || vowel == 'i' ||   
    vowel == 'o' || vowel == 'u'){
      printf("'%c' is Vowel", vowel);
  }
  else{
    printf("'%c' is Consonant", vowel);
  }
}