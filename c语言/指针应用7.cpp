//#include <stdio.h>
//
//int main()
//{
//	int a[3][4] = { { 65, 67, 70, 60 }, { 80, 87, 90, 81 }, { 90, 99, 100, 98 } };
	//int i;
	//int(*p)[4] = a;
	//for (i = 0; i < 12; i++)
	//{
	//	printf("  %d", *(*a + i));
	//}
	//printf("%d", *(*p + 5));
	//double d = 23.4;
	//printf("%f", d);
//	printf("%d", a[0][8]);  //注意这种写法也是可以的
//	while (1);
//}

////#include <stdio.h>
////
////void search(double(*arr)[4], int t)
////{
////	int i;
////	arr = arr + t - 1;
////
////	printf("%5.0lf   ", arr[1][2]);  //二维数组名指向整个一维数组的地址,
////	//若是定义了这样类型的指针,则可以当做二维数组名来使用
////
////	printf("\n");
////}
////
////int main()
////{
////	double score[3][4] = { { 65, 67, 70, 60 }, { 80, 87, 90, 81 }, { 90, 99, 100, 98 } };
////
////	search(score, 2);
////	while (1);
////}
////
////
