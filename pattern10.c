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
		for(colstars=1;colstars<=2*row-1;colstars++)
		{
			printf("*");
		}
		printf("\n");
	} 
	    for(row=rows-1;row>=1;row--)
	{
		for(colspaces=1;colspaces<=rows-row;colspaces++)
		{
			printf(" ");
		}
		for(colstars=1;colstars<=2*row-1;colstars++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
}
