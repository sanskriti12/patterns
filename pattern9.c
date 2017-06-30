# include<stdio.h>
void main()
{
	int rows;
	int count=0;
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
			if(count%2==1)
			printf("* ");
			else
			printf("# ");
			count++;
		}
		printf("\n");
	}
}
