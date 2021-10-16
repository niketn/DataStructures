#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
}*front,*temp,*rear,*ptr;
void insertf()
{
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter element: ");
 scanf("%d",&temp->data);
 if(front==NULL && rear==NULL)
 {
  front=rear=temp;
  temp->link=NULL;
  return;
 }
 temp->link=front;
 front=temp;
}
void delf()
{
 if(front==NULL)
 {
  printf("\nEmpty Deque\n");
  return;
 }
 if(front==rear && front!=NULL)
 {
  ptr=front;
  front=rear=NULL;
  free(ptr);
 }
 else
 {
  ptr=front;
  front=front->link;
  free(ptr);
 }
}
void insertr()
{
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter element: ");
 scanf("%d",&temp->data);
 temp->link=NULL;
 if(front==NULL && rear==NULL)
 {
  front=rear=temp;
  return;
 }
 rear->link=temp;
 rear=temp;
}
void delr()
{
 if(rear==front && rear==NULL)
 {
  printf("Empty DEQUE");
  getch();
  return;
 }
 else if(rear==front)
 {
  rear=front=NULL;
  free(rear);
  free(front);  
 }
 else
 {
  ptr=front;
  while(ptr->link!=NULL)
  {
   temp=ptr;
   ptr=ptr->link;
  }
  temp->link=NULL;
  free(ptr);
  rear=temp; 
 }
}
void show()
{
 if(front==NULL && rear==NULL)
 {
  printf("\nEmpty Deque\n");
  return;
 }
 ptr=front;
 printf("The elements of DEQUEUE ARE:\n");
 while(ptr!=NULL)
 {
  printf("%d\t",ptr->data);
  ptr=ptr->link;
 }
}
int main()
{
 int ch;
 while(1)
 {
  printf("\n1. Insert at rear");
  printf("\n2. Insert at Front");
  printf("\n3. Delete from front");
  printf("\n4. Delete from rear");
  printf("\n5. Show");
  printf("\n6. Exit");
  printf("\nEnter ur choice: ");
  scanf("%d",&ch);
  switch (ch)
  {
   case 1: insertr(); break;
   case 2: insertf(); break;
   case 3: delf(); break;
   case 4: delr(); break;
   case 5: show(); break;
   case 6: exit(0); break;
   default: printf("Invalid option");
  }
 }
 return 0;
}