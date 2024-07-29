#include <stdio.h>

long long int cal(long long int a, long long int b);

int main(){
    long long int a,b,result;
    scanf("%lld %lld", &a, &b);
    result=cal(a,b);
    printf("%lld",result);
}

long long int cal(long long int a, long long int b){
    return (a+b)*(a-b);
}
