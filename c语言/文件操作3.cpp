//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//
//	FILE *pfile = fopen("wang.txt", "w");
//	//char *str = "abcde";
//	char str[10] = "abcde";
//	char str1[10] = "AAAA BBBB";
//	fwrite(str, 1, 6, pfile);
//	fwrite(str1, 1, 8, pfile);
//	//int a = fread(str1, 1, 5, pfile);
//	//while (fread(str1, 1, 2, pfile))
//	//{
//	//	printf(str1);
//	//	str1[0] = 0;
//	//	str1[1] = 0;
//
//	//}
//	fclose(pfile);
//	while (1);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//


//2-2
//int main()
//{
//    FILE * p = fopen("wang.txt", "r");
//	//char str[35] = "you are beaetiful gial";
//	//fwrite(str, 1, 25, p);
//	char name[4] = { 0 };
//	//int a = fread(name, sizeof (char), 2, p);
//	//while (fread(name, sizeof (char), 2, p))
//	//{
//	//	printf(name);
//	//
//	//}
//	while (!feof(p))
//	{
//	    int a = fread(name, sizeof (char), 2, p);
//		printf(name);
//		//name[0] = 0;
//		//name[1] = 0;
//
//	}
//
//
//	//printf(name);
//  	fclose(p);
//	while (1);
//}