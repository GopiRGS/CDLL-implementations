#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insertion_beginning(){
   struct node *temp,*ptr;
   int item;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else

    printf("\nEnter Item value");     {
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL){
        head=ptr;
        ptr->next=head;
        ptr->prev=head;
    }
    else{
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        head->prev=ptr;
        ptr->next=head;
        head=ptr;

    }
}
}
void display(){
    struct node *ptr;
    ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);

}
void insertatend(){
struct node *ptr,*temp;
   int item;
   ptr = (struct node *) malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
       printf("\nEnter value");
       scanf("%d",&item);
        ptr->data=item;
       if(head == NULL)
       {
           head = ptr;
           ptr -> next = head;
           ptr -> prev = head;
       }
       else{

        temp=head;
        while(temp->next!=head){
                temp=temp->next;

        }
        temp->next=ptr;
        ptr->prev=temp;
        head->prev=ptr;
        ptr->next=head;
       }
}

}

void deleteatlast()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head){
                ptr=ptr->next;
        }
        ptr->prev->next=head;
        head->prev=ptr->prev;
        free(ptr);

    }




}


void deletefrombeginning(){
        struct node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head->next->prev=temp;
        free(head);

}
head=temp->next;
}

int main ()
{
    int choice;
    while(1)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in Beginning\n3nsert atlast\n5.lete from Beginning\n4.Delete from last\n2.show\n6.exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            insertion_beginning();
            break;

            case 2:
            display();
            break;

            case 3:
            insertatend();
            break;

            case 4:
            deleteatlast();
            break;

            case 5:
            deletefrombeginning();
            break;

            case 6:
            exit(0);

            default:
            printf("Please enter valid choice..");
        }
    }

    }
