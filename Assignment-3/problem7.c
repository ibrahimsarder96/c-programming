#include<stdio.h>
int aanatovori(void){
  int n;
  scanf("%d",&n);
  int vori = n / 16;
  return vori;
}
int main()
{
   int vori = aanatovori();
    printf("%d vori",vori);
    return 0;
}