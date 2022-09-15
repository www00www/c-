//#include <stdio.h>
//
//union Cstu
//{
//	int a;
//	char c[4];
//}st= { 134480385};
//int main()
//{
//
//	//int a = 134480385;
//	//char *p = (char *)&a;
//	int i;                 //int a = 0x1234;这样简洁一点

//	//for (i = 0; i < 4; i++)
//	//{
//	//	printf("%d  %p\n", p[i],&p[i]);
//	//}
//
//
//	//int temp;
//	//temp = p[0];
//	//p[0] = p[3];
//	//p[3] = temp;
//
//	//temp = p[1];
//	//p[1] = p[2];
//	//p[2] = p[3];
//
//	//for (i = 0; i < 4; i++)
//	//{
//	//	printf("%d  %p\n", p[i], &p[i]);
//	//}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d  %p\n", st.c[i], &st.c[i]);
//	}
//
//	while (1);
//}  //测试大小端的常用两种方法