//#include <stdio.h>
//
////void sort(int b[], int n)
////{
////	int i, j;
////	int t;
////	for (i = 0; i < n - 1; i++)
////	{
////		for (j = i + 1; j < n; j++)
////		{
////			if (b[i] < b[j])
////			{
////				t = b[i];
////				b[i] = b[j];
////				b[j] = t;
////			}
////		}
////	}
////}
//
//void sort(int b[], int n)
//{
//	int i, j;
//	int k;
//	int t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//	//	{
//			if (b[k] < b[j]) k = j;
//
//			if (i != k)
//			{
//				t = b[i];
//				b[i] = b[k];
//				b[k] = t;
//			}
//    //   }    //注意括号加与不加,运行结果不同
// 	}
//}
//
//int main()
//{
//	int a[8] = { 2, 1, 8, 3, 4, 5, 7, 6 };
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		printf(" %d", a[i]);
//	}
//	printf("\n");
//	sort(a, 8);
//	for (i = 0; i < 8; i++)
//	{
//		printf(" %d", a[i]);
//	}
//	while (1);
//	
//}