# include<stdio.h>
void main()
{
	int row,col,val=1;
	int rows=5;
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",val++);
		
		}
		printf("\n");
	}
}
