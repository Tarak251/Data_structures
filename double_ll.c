#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
}*start = NULL;
void insert_beg(int n);
void travel_forward();

int main()
{
  insert_beg(33);
  insert_beg(45);
  travel_forward();
  return 0;
}


void insert_beg(int n)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp -> data =n;
  temp -> next=NULL;
  temp -> prev = NULL;
  if( start == NULL)
    {
      start=temp;
    }
  else
    {
      temp -> next=start;
      start-> prev=temp;
      start =temp;
    }
 //printf("%d",temp->data);
}


void travel_forward()
{
  struct node *cur;
  cur=start;
  if(start == NULL)
   {
      printf("list is empty");
   }
  else
    {
        while(cur!= NULL)
    {
      printf("%d ",cur->data);
      cur = cur->next;
    }
  }
}
