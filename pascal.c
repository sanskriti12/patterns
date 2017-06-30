# include<stdio.h>
int factorial(int n)
{
	if(n==1 && n==0)
	return 1;
    return n*factorial(n-1);
}
int permutation(int n,int r)
{
	return factorial(n)/factorial(r)*factorial(n-r);
}
	
		
	
int main()
{
	int n;
	printf("enter number of rows\n");
	scanf("%d",&n);
	int i,j,k;
    for(i=1;i<=n;i++)
    {
    	for(j=n-1;j>0;j--)
    	{
    		printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%d ",permutation(i,k));
		}
		printf("\n");
	}
}
