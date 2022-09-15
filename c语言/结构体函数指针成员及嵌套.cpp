//#include <stdio.h>
//    二级指针如何使用
//void fun()
//{
//	printf("i am fun");
//}
//struct Stu
//{
//	//int *p;
//	void(*p)();
//};
//
//struct Stu
//{
//	char name1[10];
//	int age1;
//};
//
//struct Teach
//{
//	int age;
//	struct Stu stu;
//	char name[10];
//};
//int main()
//{
	//int a[4] = { 3, 5, 7, 9 };
	//struct Stu stu ;
	//stu.p = fun;
	//stu.p = a;
	//printf("%d %d", stu.p[0], stu.p[1]);
//	stu.p();
//	struct Teach tch = { 12, { "刘备", 22 }, "赵云" }; //里面的{ }可加可不加
//	printf("%s,%d", tch.stu.name1, tch.stu.age1);
//	while (1);
//
//}
//尽量不要重名,结构体尽量不要嵌套定义