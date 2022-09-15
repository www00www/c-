//#include <stdio.h>
//#include <malloc.h>
//
//typedef struct
//{
//	int *p;
//} Node;
//
//int main()
//{   
//	Node l;
//	Node *a= &l;
//	(*a).p = (int *)malloc(8);
//	(*a).p[0] = 1;
//	(*a).p[1] = 99;
//	printf("%p  %p\n", (*a).p, (*a).p + 1);
//	int *c = a->p++;
//	printf("%p  %p\n", (*a).p, (*a).p + 1);
//	printf("%d  %p",*c ,c);
//	while (1);
//
//}