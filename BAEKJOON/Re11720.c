#include <stdio.h>

int main() {
    int num, sum=0;
    scanf("%d", &num);
    char str[num];
    scanf("%s", str);
    
    for(int i = 0; i<num; i++){
       sum += ((int)str[i] - 48);
    }
    
    printf("%d", sum);
    return 0;
    
}
