#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int right = n%10;
    int left = n/10;
  //  if(n==10)
  //  {
  //   printf("NO");
  //  }
   if(left<right || left==right)
   {
    printf("YES");
   }
   else{
    printf("NO");
   }
    return 0;
}