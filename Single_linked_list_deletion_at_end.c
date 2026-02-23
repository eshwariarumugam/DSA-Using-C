#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    int n,i;
    struct node *temp=NULL,*head=NULL,*newnode=NULL;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
    
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    }
    if(head==NULL)
    {
        printf("List is empty");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else 
    {
        temp=head;
        struct node *pre=NULL;
        while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
    }
    pre->next=NULL;
    free(temp);
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        struct node*nextnode=temp->next;
        free(temp);
        temp=nextnode;
    }
    return 0;
}
//Time complexity:O(n)
    
