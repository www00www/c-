//#include <stdio.h>
//#include <malloc.h>
//#include <string>
//
//
//void fun(char** p)
//{
//
//		*p = (char*)malloc(7);
//		if (*p == NULL)
//			printf("==================");
//		char * c = *p;
//		for (int i = 0; i < 5; i++)
//		{
//			**p = 'a';
//			char * c = *p;
//			(*p) += 1;
//		}
//		*p = c;        //������ԼҵĻ�,����p��ָ��Ҳ����֮�����仯
//	/*	**p = '\0';*/
//}
//int main()
//{
// 	char* pp = NULL;
//	//char name[10] = "abcdef";
//	//name[3] = 0;
//	//int c = strlen(name);
//	//printf("%d ", c);
//	fun(&pp);
//	//p[3] = '\0';
//	printf("%c ",pp[0]);
//	while (1);
//}  