#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    int n,i;
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
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
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    if(head==NULL){
        printf("List is empty .");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
    if(head==NULL){
        printf("List is empty after deletion");
    }
    else{
        temp=head;
        printf("Updated List:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    temp = head;
    while(temp != NULL){
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}
    
    
