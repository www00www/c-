//#include <stdio.h>
////
//int main()
//{
//1.1	      //char name[] = "the beautiful girl,see you later ";
	//printf(name);
	//putchar('\n');
	//char copy_name[40];
	//int i = 0;
	//for (; name[i] != '\0'; i++)
	//{
	//	copy_name[i] = name[i];
	//}
	//copy_name[i] = '\0';
	//printf(copy_name);


//2.2
	//char name[] = "the beautiful girl,see you later ";
	//char *p1, *p2, copy_name[40];
	//p1 = name;
	//p2 = copy_name;
	//int i = 0;
	//for (; p1[i] != 0; p1++, p2++)
	//{
	//	*p2 = *p1;
	//}
	//p2[i] = '\0';
	//printf(copy_name);


//3.3
	//char name[] = "the beautiful girl,see you later ";
	//char *p = name;
	//*p = "have a good day"; //这也是错误的写法
	//printf("%c",*p);


//4.4 字符数组做参数
//	char name1[] = "the beautiful girl,see you later ";
//	printf(name1);
//	putchar('\n');
//	char name2[] = "you are the most beautiful gial i have ever see";
//	void copy_str(char to[], char fram[]);
//	copy_str(name1, name2);
//	printf(name1);
//
//	while (1);
//}

//void copy_str(char to[], char fram[])
//{
//	int i = 0;
//	for (; fram[i] != '\0'; i++)
//	{
//		to[i] = fram[i];
//	}
//	to[i] = '\0';
//}

//
//void copy_str(char to[], char fram[])
//{
//	while ((*fram) != '\0')
//	{
//		*to++ = *fram++;  //结合性自右向左  * ++ 级别相同
//		*to = '\0';
//	}
//}

//void copy_str(char to[], char fram[])
//{
//	while (*to++ = *fram++);
//}


//5.1
//#include <stdio.h>
//
//int main()
//{
//
//	//int a[4] = { 1, 2, 3, 4 };
//	//int *p = a;
//	//p[2] = 9;
//	//printf("%d", p[2]);
//	char name[20] = "see you  %d later ";
//
//	//putchar('\n');
//	//char *pstr = name;
//	//printf("%c", *(pstr + 1));
//	////*(pstr + 1) = 'w';
//	//pstr[1] = 'w';
//	//printf("%c", *(pstr + 1));
//	printf(name, 10);
//	while (1);
//}


//5.2
//#include <stdio.h>
//
//int main()
//{
//	//char *p = "see you later";
//	//p[1] = 'w';    //运行之后报错的
//
//	while (1);
//}