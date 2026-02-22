#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(){
    int n,i;
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
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
        int p;
        scanf("%d",&p);
        if(head==NULL)
        {
            printf("List is empty");
            return 0;
        }
        else if(p==1)
        {
            temp=head;
            head=head->next;
            free(temp);
        }
        else
        {
            temp=head;
            for(i=1;i<p-1&&temp!=NULL;i++)
            {
                temp=temp->next;
            }
        
        if(temp==NULL||temp->next==NULL)
        {
            printf("Invalid position");
        }
        else
        {
            struct node *pre=temp->next;
            temp->next=pre->next;
            free(pre);
        }
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
            struct node *nextnode=temp->next;
           free(temp);
           temp=nextnode;
        }
            return 0;
    }
