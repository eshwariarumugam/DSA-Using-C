//print address of array  using pointer
#include <stdio.h>
int main() {
    int a[6]={2,3,4,5,6,7};
    int *p=a;
    for (int i=0;i<5;i++)
    {
    printf("%p ",(void*)(p+i));
     }
     return 0;
     }
//Time complexity:O(n)
