//1.1//#include <stdio.h>
//// 
////#define One  1     //�򵥵��滻
////#define OneOne One  //������˷ֺ�,��ֺ�Ҳ�ᱻ�滻
//////#define 1 One    //ע����д��λ��
////#define Printf printf("%d",One);
////
////#define WangZhiChao  //�պ�Ҳ�������
////
////#define a 1 + 1
////#define b (1+1)
////int main()
////{
////	//printf("%d", OneOne);
////	//
////	//Printf
////	printf("%d", 3*a);
////	printf("\n");
////	printf("%d", 3*b);
////	while (1);
////}   
//
//2.2//#include <stdio.h>
////#define Mymax(x,y)  ((x) + (y))
////
////int main()
////{
////	printf("%d", Mymax(4, 3) * 5);
////
////	while (1);
////}
//
//
//
//3.3
//#include <stdio.h>
////#define  Point printf("123\n");\
////	           printf("123\n");\
////			   printf("123\n");
////               //ע��\�ĺ������κζ���
//#define Str(x)  #x
//#define StrStr(x,y) #x   ##   #y
//int main()
//{
//	//printf("%s\n", Str(asdfgh));
//	//Point;
//	printf("%s\n", Str(asdfgh, qwerr));
//	while (1);
//}


//#include <stdio.h>
//#define MAX 2
//#define OK 1
//#if 0
//#undef MAX         //ȡ������
//#define MAX 666
//#else
//#undef OK
//#define OK 8848
//#endif
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 5; i++)
//		a[i] = i;
//	printf("%d ", OK);
//	while (1);
//}