# include<stdio.h>
void main()
{
	int rows;
	int row,colspaces,colstars;
	printf("enter number of rows");
	scanf("%d",&rows);
	for(row=1;row<=rows;row++)
	{
		for(colspaces=rows-row;colspaces>=1;colspaces--)
		{
			printf(" ");
		}
		for(colstars=1;colstars<=row;colstars++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
