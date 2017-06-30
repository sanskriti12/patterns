# include<stdio.h>
void main()
{
	int rows;
	printf("enter no.of rows");
	scanf("%d",&rows);
	int row,col;
	int cols=rows;
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=cols;col++)
		{
			printf("*");
		}
	
		printf("\n");
		cols--;
	}
}

