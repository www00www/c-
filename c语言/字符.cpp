//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////
//int main()
//{
//	//char a[5] = "wwww";  //系统在栈区申请一块空间,赋值给字符数组 自带'\0'
//	//char*p = "wwww";            //引号返回首地址,字符串常量不可修改
//	//char c[5] = { 'a', 'b', 'c', 'd', 'e' };
//	//char name[10] = "abcde";
//	//int c = sizeof(name);
//	//char *p = name;
//	//printf("%d", c);
//	//char name[5] = {'a','b','c','d'};
//	//printf("%s", name);
//	//char name1[5] = { 'a', 'b', 'c', 'd', 'e'};
//	//printf("%s", name1);
//	//char name[] = { 'a', 'b', 'c', 'd', 'e' }; //手动加\0的情况
//	//printf("%s", name);
//	//char *p = name1;
//	//printf("%s", name1);
//	//char *p = name;
//	//printf(p);
//	//char str1[5] = "abcd";
//	//char str2[4] = "wz";
//	//char *p = "aa";
//	//strcpy(str1, str2);  //这个函数的作用是完全替换
//	//strcpy_s(str1,5, str2);
//	//strncpy(str1, str2,4);  //这个函数的作用是部分替换
//	//printf(str1);
//	//printf("\n");
//	//int a;
//	//char c;
//	//scanf_s("%c%d", &c, &a);
//	//scanf_s("%d%c", &a, &c);
//	//printf("%c,%d", c, a);
////	char name[8] = "aaa";
////	size_t d = strlen(name);
////	printf("%d",d);   //3不包括'\0'
//	char name[10];
//	//name = "sss";
//	name[0] = 'a';
//	name[9] = 'b';
//	//printf(name);  //这样子写需手动添加'\0';
//	strcpy(name, "aaa");  //不能直接赋值,需用strcpy或手动添加每一个字符,或者定义时就赋值
//	printf(name);
//	while (1);
//}