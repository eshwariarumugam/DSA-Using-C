//print Sum of array  using pointer
#include <stdio.h>
int main() {
    int a[6]={2,3,4,5,6,7};
    int *p=a;
    int sum=0;
    for (int i=0;i<6;i++)
    {
    sum=sum+*(p+i);
     }
     printf("Sum:%d",sum);
     return 0;
     }
//Time complexity:O(n)
