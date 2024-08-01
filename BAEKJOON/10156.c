#include <stdio.h>

int main() {
    int a,b,c = 0;
    int sum = 0;
    
    scanf("%d %d %d", &a, &b, &c);

    sum = a*b;
    sum-=c;
    
    if(sum < 0){
       
        sum = 0;
    }

    printf("%d", sum);

}
