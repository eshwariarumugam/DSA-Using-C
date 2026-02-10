//realloc
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

int new_size=n+5;    
a=(int*)realloc(a,new_size*sizeof(int));    

if (a==NULL){
     printf("Reallocation failed");
     return 0;}
     
for(int i=n;i<new_size;i++){ 
     a[i]=i+1;}
     
for(int i=0;i<new_size;i++){
     printf("%d\n",a[i]);} 
     
free(a);
return 0;
}  
//Time complexity:O(n)


    
