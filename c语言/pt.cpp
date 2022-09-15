#include <stdio.h>
#include <malloc.h>

//typedef struct Node
//{
//	int a = 1;
//	int *p;
//}Node;

int main()
{
	////int *q;
	////Node *as;
	////as = (Node *)malloc(sizeof(Node));
	////as->a = 999;
	////as->p = (int *)malloc(8);
	////as->p[0] = 12;
	////as->p[1] = 34;
	//////q = as->p;
	////free(as->p);
	//////as->p = NULL;
	////free(as);    // 出现莫名的错误…
	//////free(q);

	//printf("%d  ", sizeof(8));
	//double a = 1 / 3;
	//a = a*3;
	//printf("%lf ", a);
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	printf("%f %f %f", a, b, c);
	while (1);
}
