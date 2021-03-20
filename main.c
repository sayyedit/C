#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;  
};
int main()
{
    // struct node *head =NULL;
    // struct node *temp;
    // head = (struct node *)malloc(sizeof(struct node));
    // head->data = 10;
    // head->next = NULL;
    // // printf("%d|%u",head->data,head->next);
    // temp = (struct node *)malloc(sizeof(struct node));
    // temp->data = 20;
    // temp->next = NULL;
    // head->next= temp;
    // temp = head;
    // while(temp)
    // {
    //     printf("%d|%u\n",temp->data, temp->next);
    //     temp=temp->next;
    // }
   do
   {
       int choice;
       printf("Enter your choice: \n");
       printf("1.INSERT\n2.PRINT\n");
       scanf("%d",choice);
       switch (choice)
       {
       case 1 :
           
           break;
       case 2:
            break;
       default:
           break;
       }
       /* code */
   } while (/* condition */);
   
    return 0;
}
