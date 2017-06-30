# include<stdio.h>
main()
{
	int rows=5;
	int row,col;
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=row;col++)
		{
			int rem=col%2;
			printf("%d",rem);
		}
		printf("\n");
	}
}
