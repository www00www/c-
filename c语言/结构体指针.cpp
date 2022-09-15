//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <malloc.h>
//
//struct Cstu  //有名字的结构体
//{
//	char name[10];
//	char num[10];
//	int  nage;
//	double high;
//};
//
//
//int main()
//{
	//struct Cstu stu1 = {"3333", "202004150", 22, 1.73 };
    //stu1 = (struct Cstu){"汪志超", "202004150", 22, 1.73 };  //报错
	//struct Cstu *p = &stu1;
	//char *pp = str;
	//pp = "zgggg";
	//printf(pp);
	//char str[12] = "wangzhichao";
	//p->name = "wangzhichao";   这种写法是错误的,数组名是常量,不可修改
	//struct Cstu *p = (struct Cstu *)malloc(sizeof(struct Cstu));
	//strcpy_s(p->name, 10, "汪志超");
	//(*p).nage = 22;
	//printf("%d  %s", p->nage, p->name);
//	struct Cstu stu1 = { .nage = 12, };  //测试不支持
//	while (1);
//}