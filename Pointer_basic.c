#include <stdio.h>

int main() {
    int x = 4;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value using pointer: %d\n", *p);
    printf("Address of x: %p\n", p);
    return 0;
}
//Time complexity:O(1)
