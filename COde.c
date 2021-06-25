/*STACK IMPLEMENTION USING STATIC ARRAY*/

#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY], top=-1;
void push(int);
void pop();
void peek();
void traverse();
int isFull();
int isEmpty();

void main()
{
	int ch , item ;
          	while(1)
	          {
	                printf("\n1.push\n");
	                printf("2.pop\n");
	                printf("3.peek\n");
                	printf("4.traverse\n");
                	printf("5.quit");
	
	                printf("\nEnter your choice");
	                scanf("%d",&ch);
	            switch(ch)
             {
	            case 1 : printf("Enter element:");
                      scanf("%d",&item);
											           	push(item);
											           	break;
	            case 2 :pop();
                     break;
	            case 3 :peek();
                     break;
	            case 4 :traverse();
                     break;
	            case 5 : exit(0);
	            default:printf("Invalid\n");
	            }
           }
}
void push(int ele)
{
	if(isFull())
	{
		printf("Stack is full , STACK OVERFLOW \n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("\n Inserted \n");
	}
	
	
}
int isFull()
{
	
	       if(top== CAPACITY-1)
	         {
	
	          	return 1;
	
         	}
            	else
	        	{
		
	          	return 0;
          	}
}
void pop()
{
	          if(isEmpty())
	           {
	            printf("Stack underflow");
           	}
           else
          	{
											 printf("%d",stack[top]);
	           top--;
			         }
}
int isEmpty()
{
          	if(top==-1)
	            {
	            	return 1;
	            }
	          else
	           	{
	          	return 0;
	            }
}
void peek()
{
	
	if(isEmpty())
	{
		printf("\nStack Underflow");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void traverse()
{int i;
if(isEmpty())
  {
  printf("stack underflow");	
  }
else
{
	for(i=top;i>=0;i--)
	{
		printf("\n %d",stack[i]);
	}
}
	
}
