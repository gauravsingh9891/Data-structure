int a[5],f=0;r=-1;
main()
{
	int d;
	while(1)
	{
		puts("Main Menu of Queue");
		puts("Press 1: Insert");
		puts("Press 2: Delete");
		puts("Press 3: Display");
		puts("Press 4: exit");
		puts("Enter the choice");
		scanf("%d",&d);
		switch(d)
		{
			case 1: insert();
					break;
			case 2:	del();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: puts("\nInvalid choice ! Enter the choice again");						
		}
	}
	getch();
}

insert()
{
	r++;
	if(r==5)
	{
		puts("Queue is full");
		r--;
	}
	else
	{
		puts("Enter the element");
		scanf("%d",&a[r]);
	}
}

del()
{
	if(f>r)
	{
		puts("Queue is empty");
	}
	else
	{
		printf("\n%d is delete",a[f]);
		a[f]=0;
		f++;
	}
}

display()
{
 int i;
 puts("Value of Queue");
 for(i=f;i<=r;i++)
 {
 	printf("\n%d",a[i]);
 }
}
