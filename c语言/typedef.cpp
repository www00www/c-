//#include <stdio.h>
//
//typedef int myint;
//typedef myint yourint;
//
////struct Cstu
////{
////	int a;
////	char name[10];
////};
////typedef struct Cstu _Cstu;
//
////typedef struct Cstu
////{
////	int a;
////	char name[10];
////}_CCSSTTUU;     //这个不是实例化对象,而是一种数据类型
////typedef struct Cstu _Cstu;
//
//typedef struct Node
//{
//	int a;
//	char c;
//}NUM[10];
//
//typedef int* pint;
//
//void fun(int, double)   //注意函数的名字的位置
//{
//	printf("我是fun函数\n");
//}
//
//typedef void(*pfun)(int, double) ;
//
//typedef char namcc[10];
//
//int main()
//{
//	myint a = 12;
//	yourint b = 19;
//	//pint p = &a;
//	//_Cstu stu;
//	//_CCSSTTUU stu1 = { 12, "汪志超" };
//	//printf("%d\n",*p);
//	pfun  funfun = fun;
//	funfun(1, 1.1);
//	//printf("%d\n", b);
//	NUM c;   //这是合法的
//
//	namcc C = "sss";    //第50行是合法的
//	//namcc D;          //第51,52行是不合法的,这相当于 char name[10];
//	//D = "sss";        // name = "sss";
//	while (1);
//}