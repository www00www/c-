//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdarg.h>
//#define ONE(x)     #x
//#define TWO(x,y,z)       #x###y###z
//
////void fun(int a[][4]);  //int a[ ][4]  = int (*p)[4]
////void fun(int a, ...)
////{
////	va_list ap;
////	va_start(ap, a);
////	printf(" %d ", va_arg(ap, int));
////}
//
////int fun(int a)
////{
////	printf("%d ", a);
////	return 0;
////}
//
//int k = 1;
//
//int c = (k + 1)*2;
//
//int main()
//{
//	//char a,b;
//	//a = getchar();
//	//b = getchar();
//	//printf("%c %c", a, b);
//	//putchar(a);
//	//a = _getch();
//	//b = _getch();
//	//printf("%c %c", a, b);
//	//printf("%d", 'a');
//	//while (1);
//	//char a[5] = { 'a', 'b', 0, 'c', 'd' };
//	//printf("%s", a);
//	//char *p = "shuijin";
//	//p[1] = 'c';
//	//printf(p);
//	//char name[5] = "哇哇";
//	//scanf("%s", name);
//	//gets(name);
//	//printf("%c%c",name[0],name[1]);     //要连在一起,注意区别
//	//printf("%c %c", name[0], name[1]); 
//	//printf("%x%x\n", name[0], name[1]);
//	//printf("%x %x", name[0], name[1]);
//	//char t;
//	//t = name[0];
//	//name[0] = name[1];
//	//name[1] = t;
//	//printf("%x  %hu", *(short*)name, *(short*)name);
//	//printf(name);
//	//char num[] = "123456789";
//	//int frot = atoi(num);
//	//int n = 1223456;	
//	//_itoa(n, name, 10);
//	//char name[7];
//	//sprintf(name, "%d,%f", 12, 12.12);
//	//printf("%d%%", 12);
//	//int a = strlen("\888");
//	//char * num[] = { "aaa", "sss", "qqq", "ddd" };
//	//num[2] = "aaa";
//	//printf(num[1]);
//	//int a[2][3] = { 1, 2, 3, 4, 5, 6 };
//	//printf("%d", a[0][5]);
//	//int b[2][3];
//	//memcpy(b, a, 24);
//	//int c = sizeof(a);
//	//struct Node
//	//{
//	//	int a;
//	//	int b;
//	//};
//
//	//struct Ptemp
//	//{
//	//	int c;
//	//	struct Node p;
//	//};
//
//	///*struct Ptemp
//	//	{
//	//	struct Node
//	//	{
//	//		char name[10];
//	//		int b;
//	//	};
//	//	char DUD[10];
//	//	struct Node stu;
//	//	int a;
//	//};
//	//     struct Ptemp a = {"bbb" , {"aaa"  ,19*/ }, 12};
//	//a = { 12, { 14 } };
//	//a.stu = { 12 };
//	//struct Ptemp a = { 12, { 14,13} };
//	//printf("%d  ", a.stu.b);
//	//printf("%d  ", a.stu.b);
//	//enum color{a,b,c,d};
//	//int q = c;
//	//color m = d;
//	//int i = 0;
//	//for (; i < 4; ++i)
//	//{
//	//	printf("%d  ", i);
//	//}
//	//printf("\n");
//	//for (i = 0; i < 4; ++i)
//	//{
//	//	printf("%d  ", i);
//	//}
//	//printf("\n");
//	//int i = 0,
//	//	j = 0;
//	//int m = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		printf("a  ");
//	//		if (i == 1)
//	//			break;
//	//	}
//	//
//	//}	//m++;
//	//printf("\n");
//	//printf("%d ", m);
//	//(&fun)(1);
//	//int(*p)(int) = &fun;
//	//p(1);
//	//p = &fun;
//	//(*p)(99);
//	//fun(1, 12);
//	//int a = 134480385;
//	//char *p = (char*)&a;
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%d\n", p[i]);
//	//}
//	//union q
//	//{
//	//	int a;
//	//	char mume[4];
//
//	//};
//	//union q t;
//	//t.a = 134480385;
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	printf("%u\n", t.mume[i]);
//	//}
//    //printf("%s", TWO(AAAAAAA,TTTT,OOOOOO));
//    printf("%d ", c);
//	while (1);
//}
////int fun(int a)
////	{
////	extern int k;    //目的是醒目,这是全局变量
////		return k;
////	}