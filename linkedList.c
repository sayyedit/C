#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node * head = NULL;

void insert_at_end(){
    struct node *p, *temp;
    printf("Enter the data you want to insert : "); //6->4->5->10->14->
    p = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &p->data);
    p->link = NULL;
    if(head == NULL)
        head = p;
    else{
        temp = head;
        while(temp){
            temp =temp->link;
        }
        temp->link = p;
    }
}
void insert_at_begineeing(){

}
void insert_at_given_position(){
    struct node *p, *temp;
    printf("Enter the data you want to insert : "); //6->4->5->10->14->
    p = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &p->data);
    p->link = NULL;
    if(head == NULL)
        head = p;
    else{
            
    }
}
void display()
{
    struct node *p;

}
int main()
{
    int conti;
    do
    {
        int choice;
        printf("1. Inserting the NODE at the end\n");
        printf("2. Inserting the NODE at the begining\n");
        printf("3. Inserting the NODE at the given position\n");
        printf("4. Display\n");

        printf("Enter the Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:insert_at_end();
            break;
            case 2:insert_at_begineeing();
            break;
            case 3:insert_at_given_position();
            break;
            case 3:display();
            break;
            default:printf("WRONG CHOICE SELECTED, Please enter the correct chocie!\n");
            break;
        }
        printf("Do you want to continue or Quit? Continue->1, Quit->0 :");
        scanf("%d", &conti);
    }while(conti);
    // struct node *head = NULL;
    
    return 0;
}