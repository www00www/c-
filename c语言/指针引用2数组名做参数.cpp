//#include <stdio.h>
//
//int main()
//{
//	int a[3];
//	int *p = a;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf_s("%d", p++);
//	}
//	p = a;          //*p++ 的理解.1. * 和 ++ 的优先级相同,但结合性自右向左.
                    //           2. 其结果为大致等同a[1]
//	printf("www");
//	while (1);
//
//}


//#include <stdio.h>

//void fun(int p[],int n)  //一维数组名做参数
//{
//	printf("%d", p[n - 3]);
//	printf("\n");
//}

//void fun1(int(*c)[3],int hang,int lie)
//void fun1(int c[][3],int hang,int lie)
//{
//	int i, j;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d",c[i][j]);
//		}
//	
//	}
//}
//
//int main()
//{
//	int a[5] = { 3, 6, 7, 0, 2 };
//	//fun(a, 5);
//	int b[2][3] = { 2, 3, 4, 5, 6, 7 };
//	int(*p)[3] = b;
//	fun1(b, 2, 3);
//	//printf("%d", (*(&a))[1]);
//	while (1);
//
//}
