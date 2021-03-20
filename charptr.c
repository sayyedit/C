// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node * left;
//     struct node * right;
// };
// int main()
// {
//     struct node * head, *p;

//     head = (struct node *)malloc(sizeof(struct node));
//     head->data = 10;
//     head->left = NULL;
//     head->right= NULL;
//     // printf("%d\n",head->data);

//     p = (struct node *)malloc(sizeof(struct node));
//     p->left = NULL;
//     p->right = NULL;
//     p->data = 20;

//     // printf("%d",p->data);
//     head->right = p;
//     p->left = head;

//     p = head;
//     while (p)
//     {
//         printf("%d|",p->data);
//         p= p->right;
//     }

// }
#include<stdio.h>
int main()
{
    int a=7;
    printf("%d", a);
}