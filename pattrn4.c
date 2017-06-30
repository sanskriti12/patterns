# include<stdio.h>
void main()
{
	int rows;
	printf("enter number of rows");
	scanf("%d",&rows);
	int row,col;
	int cols=rows-1;
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=cols;col++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}
