//#include <stdio.h>
//#include <stdarg.h>
//
//void fun(int a,double c, ...)
//{
//	va_list gt;            //�����������
//	va_start(gt, c);       //��������ĵڶ�������Ϊ...��ǰһ��,������
//	printf("%lf",va_arg(gt, double));  //ȡ����
//	printf("\n");                      //������ת������, ===//�Ų����ĸ������Ҽӵ�
//	printf("%d", va_arg(gt, int));
//    /*va_end(gt);       */   //�൱�ڽ�ָ��ָ��NULL,
//	//va_start(gt, a);
//	printf("\n%lf", va_arg(gt, double));
//}
//
//int main()
//{
//	fun(1000, 5.1, 6.0,12,8.9);
//	putchar('\n');
//	while (1);
//}