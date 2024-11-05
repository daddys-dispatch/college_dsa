#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_size 5

int i, item, temp, top, flag = 1;
int stack[max_size], num[max_size], rev[max_size]; 

void push()
{
	if (top == (max_size - 1)) 
	{
		printf("Stack Overflow");
	}
	else 
	{
		printf("Enter element to insert: ");
		scanf("%d", &item);
		top += 1;
		stack[top] = item;
		printf("Pushed: %d", stack[top]);
	}
	temp = top;
}

void pop() 
{
	if (top == 0)
	{
		printf("Stack Underflow");
		flag = 0;
	}
	else 
	{
		item = stack[top];
		top -= 1;
	}
}

void pali() 
{
	if (top == 0) 
	{
		printf("Stack is empty");
	}
	else 
	{
		while (top != 0) 
		{
			rev[top] = stack[top];
			pop();
		}
		top = temp;
		for(i = 0; i <= temp; i++)
		{
			if (stack[top--] == rev[i]) 
			{
				printf("Not a Palindrome");
				return;
			}
		}
		printf("Palindrome");
	}
}


void display() 
{
	int i, top = temp;
	if (top == 0)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Stack: ");
		for (i = 1; i <= top; i++)
		{
			printf("%d ", stack[i]);
		}
	}
}


void main() {
	int choice;
	
	printf("STACK OPERATIONS\n");
	printf("[1] Push\n");
	printf("[2] Pop\n");
	printf("[3] Palindrome\n");
	printf("[4] Display\n");
	printf("[0] EXIT");
	
	while(1)
	{
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				push();
				break;
				
			case 2: 
				pop();
				if(flag != 0)
				{
					printf("Popped: %d", item);
					temp = top;
					break;
				}
				break;
				
			case 3: 
				pali();
				top = temp;
				break;
			
			case 4: 
				display(); 
				break;
				
			case 0: 
				printf("Exited");
				exit(0); 
				break;
			
			default: 
				printf("Invalid choice, try again.");
				break;
		}
	}
}
