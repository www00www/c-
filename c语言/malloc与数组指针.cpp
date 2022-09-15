//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>

//int main()
//{
	//一维数组
	//int i = 0;
	//int a[5] = { 1, 3, 4, 5, 6 };
	//int(*p)[5] = &a;
	//for (; i < 5; i++)
	//{
	//	printf("%d", (*p)[i]);
	//}
	//printf("\n");
	//int(*pp)[5] = (int(*)[5] )malloc(5); //注意*要加括号
	//for (i = 0; i < 5; i++)
	//{
	//	(*pp)[i] = i;
	//	printf("%d", (*pp)[i]);
	//}
	//int n = 0;
	//int a[2][3] = { 0 };
	//int(*p)[2][3] = &a;
	//*p == a;
//	int(*pp)[2][3] = (int(*)[2][3])malloc(30);
//	int i = 0,
//		j = 0;
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0  ; j < 3; j++)
//		{
//			*pp[i][j] = n;
//			n++;
//		}
//	}
//
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf(" %d ", *pp[i][j]);
//		}
//	}
//
//	
//
//free(pp)
//	int *p = (int *)malloc(30);
//	int a = _msize(p);
//	printf("%d", a);
//	while (1);
//}