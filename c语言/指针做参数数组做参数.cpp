//#include <stdio.h>
//
//void fun(int p[100],int n)  //int p[] == int *  [ ]里面的数据随便写
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", p[i]);
//	}
//}
//
//void fun1(int a[][3], int row, int lie)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d", a[i][j]);
//		}
//	}
//}
//int main()
//{
//	int a[4] = { 2, 4, 5, 6 };
//	fun(a, 4);
//	int b[2][3] = { 3, 4, 5, 6, 7, 8 };
//	int(*p)[3] = b;
//	printf("\n");
//	fun1(b, 2, 3);
//	while (1);
//
//
//}