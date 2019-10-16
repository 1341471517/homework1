#define 
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
#define MID 4
int main()
{
	int arr1[ROW][MID] = { 0 };
	int arr2[MID][COL] = { 0 };
	int arr3[ROW][COL] = { 0 };
	int i = 0;
	int j = 0;
	int m = 0;
	printf("第一个矩阵\n" );
	for (i = 0; i < ROW; i++)
	{
		printf("第一个矩阵的%d行\n", i);
		for (j = 0; j < MID; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("第二个矩阵\n");
	for (i = 0; i < MID; i++)
	{
		printf("第二个矩阵第%d行\n", i);
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("第三个矩阵:\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			int sum = 0;
			for (m = 0; m < MID; m++)
			{
				sum = sum + arr1[i][m] * arr2[m][j];
			}
			arr3[i][j] = sum;
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d", arr3[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
