#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node *next;
};
struct node *head;

int main ()
{
    printf("IMPLEMENTATION OF STACK USING LINKED LIST\n");
 int choice=0;
 while(choice != 4)
 {
 printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
 printf("\n Enter your choice \n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: push();
        display();
        break;
         
 case 2:pop();
        display();
        break;
         
 case 3:display();
        break;
 
 case 4:printf("Exiting...");
        break;
 
 default:printf("Please Enter valid choice ");
 };
}
return 0;
}
void push ()
{
 int val;
 struct node *ptr = (struct node*)malloc(sizeof(struct node));
 if(ptr == NULL)
 {
 printf("Memory not allocated\n");
 }
 else
 {
 printf("Enter the value: ");
 scanf("%d",&val);
 if(head==NULL)
 {
 ptr->val = val;
 ptr -> next = NULL;
 head=ptr;
 }
 else
 {
 ptr->val = val;
 ptr->next = head;
 head=ptr;

 }
 printf("Item pushed\n");

 }
}
 void pop() 
{
 int item;
 struct node *ptr;
 if (head == NULL)
 {
 printf("Underflow");
 }
 else
 {
 item = head->val;
 ptr = head;
 head = head->next;
 free(ptr);
 printf("''%d' item popped\n", item);

 }
}
void display()
{
 int i;
 struct node *ptr;
 ptr=head;
 if(ptr == NULL)
 {
 printf("Stack is empty\n");
 }
 else
 {
 printf("Printing Stack elements \n");
 while(ptr!=NULL)
 {
 printf("%d\n",ptr->val);
 ptr = ptr->next;
 }
 }
} 