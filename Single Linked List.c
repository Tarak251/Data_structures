#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
    
}*start;
   
void insert_beg(int n)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    if(start == NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}

void travel_forward(){
   struct node* curr;
   curr=start;
   if(start==NULL)
   {
	printf("Empty List");
   } 
   else
   {
   while(curr!=NULL)
	{
	printf("%d ",curr->data);
	curr=curr->next;
	}
   }
}

void insert_end(int n){
   struct node* temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data = n;
   temp->next=NULL;
   struct node*curr=start;
   if(start==NULL)
	{
	   start=temp;
	}
   else   
   	{
   	while(curr->next!=NULL)
   	{
   		curr=curr->next;
   	}
   	curr->next=temp;
   	}
   }	
   
void insert_after(int n, int s){
	struct node*temp,*curr;
	   temp=(struct node*)malloc(sizeof(struct node));
	   temp->data=n;
	   temp->next=NULL;
	if(start==NULL)
		{
		  printf("Empty");
		}
	else
	   {
	   	curr=start;
	   	while(curr!=NULL&&curr->data!=s)
	   	{
	   		curr=curr->next;
	   	}
	   	if(curr!=NULL)
	   	{
		   	temp->next=curr->next;
		   	curr->next=temp;
	   	}		
	   	else
	   	{
	   		printf("Element not found\n");
	   	}
	   }
    }

int delete_first(){
	int x=-1;
	
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	if(start==NULL)
	{
		printf("LIST is empty");
	}
	else
	{
		temp=start;
		x=temp->data;
		start=start->next;
		temp=NULL;
	}
	return x;
     }
     
int delete_last(){
	int x=-1;
	struct node *temp, *curr;
	temp=(struct node*)malloc(sizeof(struct node));
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		if(start->next==NULL)
		{
		temp=start;
		x=temp->data;
		free(temp);
		temp=NULL;
		}
		else
		   {
			   curr=start;
			   while(curr->next->next!=NULL)
			   {
			   	curr=curr->next;
			   }
			   temp=curr->next;
			   x=temp->data;
			   curr->next=NULL;
			   free(temp);
			   temp=NULL;
		   }
	 }
    }
    
void insert_before(int n, int s){
	struct node*temp,*cur;
	   temp=(struct node*)malloc(sizeof(struct node));
	if(start==NULL)
	{
		printf("Is empty");
	}
	else
	   {
	    	temp->data=n;
	    	temp->next=NULL;
	    	  if(start->data==s)
	    	  {
	    	  	temp->next=start;
	    	  	start=temp;
	    	  }
	    	  else
	    	  {
	    	  	cur=start;
	    	  while(cur->next!=NULL && cur->next->data!=s)
	    	  {
	    	  	cur=cur->next;
	    	  }
	    	  if(cur->next!=NULL)
	    	  {
	    	  	temp->next=cur->next;
	    	  	cur->next=temp;
	    	  }
	    	  else
		    	  {
		    	  	printf("Element is not found\n");
		    	  }
	   	  }
	    }  
	}
	
void delete_spec(int s){
	struct node* temp, *curr;
	   temp=(struct node*)malloc(sizeof(struct node));
	if(start==NULL)
	{
		printf("List is Empty\n");
	}
	else
	   {
	     if(start->data=s)
	     {
	       temp=start;
	       start=temp->next;
	       free(temp);
	       temp=NULL;
	      }
	     else
	         {
			 curr=start;
			 while(curr->next!=NULL && curr->next->data!=s)
	         		{
	  				curr=curr->next;
	  		        }
	  		        if(curr->next!=NULL)
	  		          {	
	      				temp=curr->next;
	      				curr->next=temp->next;
	      				free(temp);
	      				temp=NULL;
	      			   }
	      			   else
	      			   	{
	      			   	  printf("Element Not Found");
	      			   	}
	           }
	       }
    }
    
void reverse(){
    struct node *temp, *rev;
    temp=(struct node*)malloc(sizeof(struct node));
    rev=NULL;
    while(start!=NULL){
     temp=start;
     start=temp->next;
     temp->next=rev;
     rev=temp;
     }
     start=rev;
    }
    
void fun_print(struct node *curr){
            if(curr->next!=NULL)
             {
              fun_print(curr->next);
             }
               printf("%d ",curr->data);
           }
void travel_back(){
	if(start==NULL)
	  {
	   printf("List is Empty");
	  }
	 else
	   {
	     fun_print(start);
	   }
	  }
         
              
	      			   
int main()
{
    int size;
     start = NULL;
     printf("Enter the elements:");
    insert_beg(77);  
   //printf("%d",start->data);
    travel_forward();
    insert_end(89);
      insert_end(65);
        insert_end(21);
          insert_end(22);
    
    travel_forward();
    //reverse();
    //printf("\n");
    //travel_forward();
 insert_after(10,65);
    printf("\n");
    delete_spec(77);
     travel_forward();
     travel_back();
     
    
    
    
    
   
   
   
return 0;  
}


















