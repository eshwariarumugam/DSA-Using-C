//print arr,&arr,arr[0]
#include <stdio.h>

int main() {
    int arr[6]={2,3,4,5,6,7};
     printf("%p", arr); 
     printf("%p ",&arr);
     printf("%p ",&arr[0]);
     return 0;
     }
//Time complexity:O(n)
