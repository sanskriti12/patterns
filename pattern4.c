# include<stdio.h>
void main()
{

int rows=5;
int row,col1,col2;
int cols=rows-1;
for(row=1;row<=rows;row++)
{
	for(col1=1;col1<=cols;col1++)
	{
		printf(" ");
	}
	cols--;
	for(col2=1;col2<=row;col2++)
	{
		printf("*");
		
	}
	printf("\n");
}
}
