//count the number of elements in array
#include <stdio.h>

int main() {
int arr[5] = {3, 5, 2, 9, 1};
int count=0;

for (int i=0;i<5;i++){  
     count++;  
}

printf("count=%d",count);
return 0;}

//Time complexity is O(n)
