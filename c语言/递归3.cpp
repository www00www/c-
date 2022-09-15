//#include <stdio.h>
//
//int fun1(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		return  fun1(n - 1) + fun1(n - 2);
//	}
//}
//
//int fun2(int n)
//{
//	if (n < 0)
//		return 0;
//	int c;
//	int a = 1;
//	int b = 1;
//	if (n == 1 || n == 2)
//		return a;
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//		{
//		c = b;
//		b = a;
//		a = a + c;
//		
//		}
//		return a;
//	}
//	
//}
//
//
//int main()
//{
//	int a = fun2(30);
//	int b = fun1(30);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	while (1);
//
//
//
//}