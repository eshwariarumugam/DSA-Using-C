//print minimum of array  using pointer
#include <stdio.h>
int main() {
    int a[6]={2,3,4,5,6,7};
    int *p=a;
    int min=*p
    
    for (int i=0;i<6;i++)
    {
    if(min>*(a+i))
    min=*(a+i);
     }
     printf("Minimum:%d",min);
     return 0;
     }
//Time complexity:O(n)
