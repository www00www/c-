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
//	p = a;          //*p++ �����.1. * �� ++ �����ȼ���ͬ,���������������.
                    //           2. ����Ϊ���µ�ͬa[1]
//	printf("www");
//	while (1);
//
//}


//#include <stdio.h>

//void fun(int p[],int n)  //һά������������
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
