//print maximum using pointer
#include <stdio.h>

int main() {
    int a[6]={2,3,4,5,6,7};
    
    int *max=a;
    for (int i=1;i<6;i++)
    {
       if(*(a+i)>*max) 
       max=(a+i);
       }
     printf("%d ", *max);
    return 0;
}
//Time complexity:O(n)
