#include <stdio.h>

int main() {
  
    while(1){

        int a,b = 0;
        
        scanf("%d %d", &a,&b);
        
        if(a == 0 || b == 0){
            break;
        }
        if(a < b || a == b){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
        
    }
    
}
