////#include <stdio.h>
////#include <stdlib.h>
////#include <malloc.h>
////#include <memory.h>
////
////int main()
////{
////	//int *p = (int *)malloc(sizeof(int));  //什么类型的变量
////	//*p = 4;
////	//printf("%d", *p);
////	//int b = sizeof size_t;
////	//int *p1 = (int*)malloc(4u);
////	//int *p2 = (int*)malloc(0);  //可返回地址,但是不可操作
////	//int *p3 = (int*)malloc(2 * 1024 * 1024 * 1024); //整形常量溢出 注意int可以表示数的大小 
////	//倘若倘若写成2 * 1024 * 1024 * 1024-1的形式也是不行的,因为它先溢出
////	/*int *p3 = (int*)malloc(2u * 1024u * 1024u * 1024u);*/
////	//太大会会返回NULL( 0 )
////	int *p = (int*)malloc(40);
////	//for (int i = 0; i < 10; i++)
////	//{
////	//	p[i] = 0;
////	//}
////	memset(p, 0, 40);//按字节分配内存
////	memset(p, 1, 40);
////	while (1);
////}