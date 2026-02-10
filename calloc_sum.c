//calloc()
#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,sum=0;
scanf("%d",&n);
int*a=(int*)calloc(n,sizeof(int));
if (a==NULL){
    printf("Failed");
    return 0;}
for (int i=0;i<n;i++){
    a[i]=i+1;}
for (int i=0;i<n;i++){
     sum=sum+a[i];
     }
     printf("%d \n",sum);
 free(a); 
return 0;
}     
