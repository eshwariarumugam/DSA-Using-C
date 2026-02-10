//malloc()
#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int*a=(int*)malloc(n*sizeof(int));
if (a==NULL){
    printf("Failed");
    return 0;}
for (int i=0;i<n;i++){
    a[i]=i+1;}
for (int i=0;i<n;i++){
     printf("%d \n",a[i]);
     }
 free(a);
return 0;
}      
 //Time complexity:O(n)  
