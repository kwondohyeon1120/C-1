#include <stdio.h>

int main() {
    int a = -1;  // -2^-16 ~ 2^16-1   // 0 ~ 2^32 - 1   
    printf("a %%d: %d\n", a);
    printf("a %%i: %i\n", a);
    printf("a %%c: %c\n", a);
    printf("a %%u: %u\n", a);
    printf("-----\n");
    return 0;
}