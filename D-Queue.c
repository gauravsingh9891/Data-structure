#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[5],f1=0,r1=-1,f2=4,r2=5;
main()
{
	int d;
	while(1)
	{
		puts("Main Queue Menu");
		puts("Press 1: Left insert");
		puts("Press 2: Right insert");
		puts("Press 3: Left Delete");
		puts("Press 4: Right Delete");
		puts("Press 5: Left Display");
		puts("Press 6: Right Display");
		puts("Press 7: exit");
		puts("Enter the your choice");
		scanf("%d",&d);
		switch(d)
		{
			case 1: Left_insert();
					break;
			case 2: Right_insert();
					break;
			case 3:	Left_del();
					break;
			case 4:	Right_del();
					break;
			case 5:	Left_display();
					break;
			case 6:	Right_display();
					break;													
			case 7: exit(0);
			default: puts("Invalid choice ! Please enter the valid choice");
		}
	}
	getch();
}

Left_insert()
{
	r1++;
	if(r1==r2)
	{
		puts("Queue is full");
		r1--;
	}
	else
	{
		puts("Enter the new element from left side");
		scanf("%d",&a[r1]);
	}
}

Right_insert()
{
	r2--;
	if(r2==r1)
	{
		puts("Queue is full");
		r2++;
	}
	else
	{
		puts("Enter the new element from right side");
		scanf("%d",&a[r2]);
	}
}

Left_del()
{
	if(f1>r1)
	{
		puts("Queue is empty form Left side");
	}
	else
	{
		printf("\n%d is delete from left side",a[f1]);
		a[f1]=0;
		f1++;
	}
}

Right_del()
{
	if(f2>r2)
	{
		puts("Queue is empty from right side");
	}
	else
	{
		printf("\n%d is delete from right side");
		a[f2]=0;
		f2--;
	}
}

Left_display()
{
	int i;
	puts("The elements of queue from left side");
	for(i=f1;i<=r1;i++)
	{
		printf("\n%d",a[i]);
	}
}

Right_display()
{
	int i;
	puts("The elements of queue from Right side");
	for(i=f2;i>=r2;i--)
	{
		printf("\n%d",a[i]);
	}
}

