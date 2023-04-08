#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int digit = x / 1000; // Four digit from last three digit Divide by one thousand to subtract
    if(digit%2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}