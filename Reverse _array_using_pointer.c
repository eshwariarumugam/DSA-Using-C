//print reverse using pointer
#include <stdio.h>

int main() {
    int a[6]={2,3,4,5,6,7};
    
    int *p=a;
    for (int i=5;i>=0;i--)
    {
     printf("%d ", *(p+i));
     }
    return 0;
}
//Time complexity:O(n)
