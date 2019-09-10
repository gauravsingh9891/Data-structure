/*
   ----------------------------------------------------------------CIRCULAR QUEUE PROGRAM--------------------------------------------------------------------
*/

#include<stdlib.h>
int a[5],f=0,r=-1,k,c=0;
main()
{
	int d;
	while(1)
	{
		puts("\n**********Main Queue menu***********");
		puts("Press 1: for insert");
		puts("Press 2: for delete");
		puts("Press 3: for display");
		puts("Press 4: for exit");
		puts("Enter your choice");
		scanf("%d",&d);
		switch(d)
		{
			case 1: insert();
					break;
			case 2: del();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: puts("Ivalid choice !");						
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
		puts("Enter the element ");
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

display()
{
	int i;
	i=f;
	do
	{ 
	 printf("\n%d",a[i]);
	 i++;
	 i=i%5;
	}while(i!=f);
}
