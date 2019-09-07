/*
		-------------CIRCULAR QUEUE------------------------------

*/
#include<stdlib.h>
int a[5],f=0,r=-1,k,c=0;
main()
{
	int d;
	while(1)
	{
		puts("Main Menu of Queue");
		puts("Press 1: insert");
		puts("Press 2: delete");
		puts("Press 3: list");
		puts("Press 4: exit");
		puts("Enter Your choice");
		scanf("%d",&d);
		switch(d)
		{
			case 1: insert();
					break;
			case 2: del();
					break;
			case 3: list();
					break;
			case 4: exit(0);
			default: puts("Invalid choice !");						
		}
	}
	getch();
}

insert()
{
	k=r;
	r++;
	r=r%5;
	if(c==5)
	{
		puts("Queue is full");
		r=k;
	}
	
	else
		{
			puts("Enter the new element");
			scanf("%d",&a[r]);
			c++;
		}
}

del()
{
	if(c==0)
	{
		puts("Queue is empty");
	}
	else
	{
		printf("\n%d is deleted",a[f]);
		a[f]=0;
		f++;
		f=f%5;
		c--;
	}
}

list()
{
	int i;
	puts("Elements of Queue");
	for(i=f;i<=r;i++)
	{
		printf("\n%d",a[i]);
	}
}
