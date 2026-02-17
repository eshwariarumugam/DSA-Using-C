#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

int main()
{
    int n,i;
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    
    printf("Enter number of nodes:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        
        printf("Enter: ");
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
    
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    
    newnode=(struct node*)malloc(sizeof(struct node));
         printf("Enter the value to insert: ");
         scanf("%d",&newnode->data);
         
    if(pos==1){
        newnode->next=head;
        head=newnode;
    }
    else if(pos<1)
    {
        printf("Invalid position");
        free(newnode);
    }
    else {
        temp=head;
        for(i=1;i<pos-1&&temp!=NULL;i++)
        {
            temp=temp->next;
        }
        if(temp==NULL){
            printf("Invalid position");
            free(newnode);
        }
        else{
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
    temp=head;
    printf("Linked list: ");
    while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
    }
        temp = head;
    while(temp != NULL){
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;

    }
    return 0;
    
}
