//sum of array elements
#include <stdio.h>

int main() {
    int arr[3] = {5, 10, 15},sum=0;
    

    for(int i = 0; i < 3; i++) {
        sum+=arr[i];
       } printf("%d ", sum);
    
    return 0;
}
//Time complexity:O(n)
