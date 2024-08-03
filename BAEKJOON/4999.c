#include <stdio.h>
#include <string.h>

int main() {
    char jae [999];
    scanf("%s", jae);

    char dr [999];
    scanf("%s", dr);

    if(strlen(jae)<strlen(dr)){
        printf("no");
    }else{
        printf("go");
    }
    
}
