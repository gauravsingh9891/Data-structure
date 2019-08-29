#include<stdlib.h>
int a[5],top=-1,etop=5;
main()
{
	int d;
	while(1)
	{
		puts("Main Stack Menu");
		puts("Press 1: Left Push");
		puts("Press 2: Right Push");
		puts("Press 3: Left Pop");
		puts("Press 4: Right Pop");
		puts("Press 5: Left list");
		puts("Press 6: Right list");
		puts("Press 7: Exit");
		scanf("%d",&d);
		switch(d)
		{
			case 1: Left_push();
					break;
			case 2: Right_push();
					break;
			case 3: Left_pop();
					break;
			case 4:	Right_pop();
					break;
			case 5:	Left_list();
					break;
			case 6:	Right_list();
					break;
			case 7: exit(0);		
			default: puts("Invalid choice");														
		}
    	}
	getch();
}

Left_push()
{
	top++;
	if(top==etop)
	{
		puts("stack is overflow by left");
		top--;
	}
	else
	{
		puts("enter the new elements");
		scanf("%d",&a[top]);
	}
}

Left_pop()
{
	if(top==-1)
	{
		puts("Stack is underflow from left");
	}
	else
	{
		printf("\n%d is popped from left side stack");
		a[top]=0;
		top--;
	}
}

Left_list()
{
	int i;
	puts("Elements of Left side stack");
	for(i=0;i<=top;i++)
	{
		printf("\n%d",a[i]);
	}
}

Right_push()
{
	if(etop==top)
	{
		puts("Stack is overflow form right side");
		etop++;
	}
	else
	{
		puts("enter the new element from right side");
		scanf("%d",a[etop]);
		etop--;
	}
}

Right_pop()
{
	if(etop==5)
	{
		puts("stack is underflow form right side");
		etop--;
	}
	else
	{
		printf("\n%d is popped form right side",a[etop]);
		etop++;
	}
}

Right_list()
{
	int i;
	puts("Element of right side of stack");
	for(i=4;i<=etop;i++)
	{
		printf("\n%d",a[i]);
	}
}
