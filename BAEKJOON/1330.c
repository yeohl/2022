// 두 수 비교
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d\n", &A, &B);

    if (A > B)
        printf(">\n");
    if (A < B)
        printf("<\n");
    if (A == B)
        printf("==");
    return 0;
}