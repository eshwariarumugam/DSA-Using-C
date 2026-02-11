#include <stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
   };
   
int main()
{
    struct node *head=NULL,*second=NULL,*third=NULL;
    int count=0;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=NULL;
    
    struct node *temp=head;
    while(temp!=NULL)
    { 
        count++;
        temp=temp->next;
        }
        printf("%d",count);
     free(head);
     free(second);
     free(third);
     return 0;
}       
//Time complexity:O(n)
       
    
