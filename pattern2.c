# include<stdio.h>
main()
{
	int rows=5;
	int row,col;
	for(row=1;row<=rows;row++)
	{
		for(col=1;col<=row;col++)
		{
			
			printf("%d",row*col);
		}
		printf("\n");
	}
}
