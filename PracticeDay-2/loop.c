#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    int n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
      if(i % 5 == 0){
          printf("%d Yes\n", i);
    }else if(i){
        printf("%d No\n", i);  
      }
        
      
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // Enter your code here. Read input from STDIN. Print output to STDOUT    
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%f", &c);
    scanf("\n%c", &d);

    printf("%d\n%lld\n%0.4f\n%c", a,b,c,d);
    return 0;
}
*/