#include <stdio.h>

int main() {

    char str[255];
    
    while(1){

        int check = 0;
        fgets(str,255,stdin);

        for(int i = 0; str[i]!='\0'; i++){
            
            if(str[i] == 'a' || str[i] == 'A')
                check++;
            else if(str[i] == 'e' || str[i] == 'E')
                check++;
            else if(str[i] == 'i' || str[i] == 'I')
                check++;
            else if(str[i] == 'o' || str[i] == 'O')
                check++;
            else if(str[i] == 'u' || str[i] == 'U')
                check++;
        }

        if(str[0] == '#'){
            break;
        }

        printf("%d\n", check);

      
    }
    
}
