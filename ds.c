#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int a[5],top=-1;
void push();
void pop();
void list();
main()
{
	int d;
	while(1)
	{
		puts("\nMain stack menu\n");
		puts("\n Press 1: push");
		puts("\n Press 2: pop");
		puts("\n Press 3: list");
		puts("\n Press 4: exit");
		puts("\n Enter the choice ");
		scanf("%d",&d);
		switch(d)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: list();
					break;
			case 4: exit(0);
			default: puts("\n Invalid input!");						
		}
	}
	getch();
}

push()
{
	top++;
	if(top==5)
	{
		puts("stack is overflow");
		top--;
		getch();
	}
	else
	{
		puts("\nenter the new elements");
		scanf("%d",&a[top]);
	}
}

pop()
{
	if(top==-1)
	{
		puts("\nstack is underflow");
		getch();
	}
	else
	{
		printf("\n%d is popped",a[top]);
		a[top]=0;
		top--;
	}
}


list()
{
	int i;
	puts("\nstack elements are\n");
	for(i=0;i<top;i++)
	printf("\n%d",a[i]);
	getch();
}
