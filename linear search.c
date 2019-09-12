main()
{
	void linear_search(int [],int,int);
	int a[100],n,i,k;
	puts("Enter the limit of an array =");
	scanf("%d",&n);
	puts("Enter the array element =");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
   }
   puts("Enter the element to search =");
   scanf("%d",&k);
   linear_search(a,n,k);
   getch();
}

void linear_search(int a[],int n,int k)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=1;
			puts("Element found !");
			break;
		}
		
	}
	if (flag==0)
	puts("Element not found");
}
