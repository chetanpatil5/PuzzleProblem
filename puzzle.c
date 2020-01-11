#include<stdio.h>
#include <stdlib.h>

void display(int arr[4][4]);
void shuffle(int arr[4][4]);
//void up(int arr[4][4]);
//void down(int arr[4][4]);
//void left(int arr[4][4]);
//void right(int arr[4][4]);

int main()
{
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,-1}};
	int r=3,c=3,r1,c1;
	char ch=' ';
	int temp;

	//display(arr);
	shuffle(arr);
	

	while(ch!='e')
	{
		display(arr);
		printf("\nEnter Your choice\n");
		scanf("%c",&ch);
		
		switch(ch)
		{
			case 'u':r1=r+1;
					if(r1> 3)
					{
					 printf("\nInvalid Move ");
					}
					else
					{
						temp=arr[r][c];
						arr[r][c]=arr[r1][c];
						arr[r1][c]=temp;
						r=r1;

					}
					break;
			case 'd':r1=r-1;
					if(r1<0)
					{
						printf("\nInvalid Move ");

					}
					else
					{
						temp=arr[r][c];
						arr[r][c]=arr[r1][c];
						arr[r1][c]=temp;
						r=r1;
					}
					break;
			case 'l':c1=c+1;
					if(c1>3)
					{
						printf("\nInvalid Move ");
					}
					else
					{
						temp=arr[r][c];
						arr[r][c]=arr[r][c1];
						arr[r][c1]=temp;
						c=c1;
					}

					break;
			case 'r':c1=c-1;
					if(c1<0)
					{
						printf("\nInvalid Move ");
					}
					else
					{
						temp=arr[r][c];
						arr[r][c]=arr[r][c1];
						arr[r][c1]=temp;
						c=c1;
					}
					break;

		}

	}
	
	return 0;
}

void display(int arr[4][4])
{
	
	printf("\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

void shuffle(int arr[4][4])
{
	int a=0,b=0,c=0,d=0;
	for(int i=0;i<10;i++)
	{
		a=rand()%4;
		b=rand()%4;
		c=rand()%4;
		d=rand()%4;
		if(!((a==3&&b==3)||(c==3&&d==3)))
		{
			int temp=arr[a][b];
			arr[a][b]=arr[c][d];
			arr[c][d]=temp;
		}

		printf("%d  %d  %d  %d\n",a,b,c,d);
	}
}
