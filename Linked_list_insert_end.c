#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main()
{
    int n;
    struct node *head=NULL, *newnode=NULL, *temp=NULL;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++){

        newnode=(struct node*) malloc(sizeof(struct node));

        printf("Enter data at node %d: ", i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    //insertion at the end
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node to insert at the end:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
        
    if (head==NULL){
        head=newnode;}
    else {   
        temp = head;
        while(temp->next != NULL){
          temp = temp->next;
    }
       temp->next = newnode;
     }   
    temp=head;
    printf("Linked list:\n");

    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    

    // Free memory properly
    temp = head;
    while(temp != NULL){
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}
//Time complexity:O(n)
