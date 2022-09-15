//#include <stdio.h>
//#include <stdarg.h>
//
//void fun(int a,double c, ...)
//{
//	va_list gt;            //定义参数数组
//	va_start(gt, c);       //这个参数的第二个参数为...的前一个,别乱整
//	printf("%lf",va_arg(gt, double));  //取出来
//	printf("\n");                      //将参数转进数组, ===//放参数的个数把我加的
//	printf("%d", va_arg(gt, int));
//    /*va_end(gt);       */   //相当于将指针指向NULL,
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