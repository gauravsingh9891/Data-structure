#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



#define size 5
int a[5],top=-1,etop=5; //stack
main()
{
	int d;
	while(1)
	{
		puts("Main Menu of Stack");
		puts("Press 1: Left push");
		puts("Press 2: Left pop");
		puts("Press 3: Left list");
		puts("Press 4: Right push");
		puts("Press 5: Right pop");
		puts("Press 6: Right list");
		puts("Press 7: exit");
		scanf("%d",&d);
		switch(d)
		{
			case 1: Left_push();
					break;
			case 2: Left_pop();
					break;
			case 3: Left_list();
					break;
			case 4: Right_push();
					break;
			case 5: Right_pop();
					break;
			case 6: Right_list();
					break;
			case 7: exit(0);
			default: puts("Invalid Entery !");								
		}
	}
	getch();
}

Left_push()
{
	top++;
	if(top==etop)
	{
		puts("stack is overflow from left side");
		top--;
	}
	else
	{
		puts("Enter the new elements");
		scanf("%d",&a[top]);
	}
}

Left_pop()
{
	if(top==-1)
	{
		puts("Stack is underflow form left side");
		top++;
	}
	else
	{
		printf("\n%d is popped from left side",a[top]);
		a[top]=0;
		top--;
	}
}

Left_list()
{
	int i;
	puts("Elements of the stack of left side");
	for(i=0;i<=top;i++)
	printf("\n%d",a[i]);
}

Right_push()
{
	etop--;
	if(etop==top)
	{
		puts("Stack is overflow form right side");
		etop++;
	}
	else
	{
		puts("Enter the new element form right side");
		scanf("%d",&a[etop]);
	}
	
}

Right_pop()
{
	if(etop==5)
	{
		puts("Stack is underflow form right side");
	}
	else
	{
		printf("\n%d is popped is form right side",a[etop]);
		a[etop]=0;
		etop++;
	}
}

Right_list()
{
	int i;
	puts("Elements of the stack of right side");
	for(i=4;i>=etop;i--)
	printf("\n%d",a[i]);
}
