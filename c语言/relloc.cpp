//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  
//#include <stdlib.h>  
//
//int main()
//{
//	int input;
//	int n;
//	int *numbers1;
//	int *numbers2;
//	numbers1 = NULL;
//
//	if ((numbers2 = (int *)malloc(5 * sizeof(int))) == NULL)//Ϊnumbers2�ڶ��з����ڴ�ռ�  
//	{
//		printf("malloc memory unsuccessful");
//		exit(1);
//	}
//
//	printf("numbers2 addr: %8X\n", (int)numbers2);
//
//	for (n = 0; n<5; n++) //��ʼ��  
//	{
//		*(numbers2 + n) = n;
//		//printf("numbers2's data: %d\n",*(numbers2+n));  
//	}
//
//	printf("Enter new size: ");
//	scanf("%d", &input);
//
//	//���·����ڴ�ռ䣬�������ɹ��Ļ������ͷ�numbers2ָ��,  
//	//���ǲ�û�н�numbers2ָ�븳ΪNULL,Ҳ����˵�ͷŵ�����ϵͳ����Ķѿռ䣬  
//	//�͸�ָ��û��ֱ�ӵĹ�ϵ��������Ȼ������numbers2�������ⲿ�ֶѿռ䣬����  
//	//���ڵĶѿռ��Ѿ������ڸý��̵��ˡ�  
//	numbers1 = (int *)realloc(numbers2, (input + 5)*sizeof(int));
//
//	if (numbers1 == NULL)
//	{
//		printf("Error (re)allocating memory");
//		exit(1);
//	}
//
//	printf("numbers1 addr: %8X\n", (int)numbers1);
//
//	for (n = 0; n<5; n++) //�����numbers2������������
//	{
//		printf("the numbers1's data copy from numbers2: %d\n", *(numbers1 + n));
//	}
//
//	//for (n = 0; n<input; n++)//�����ݳ�ʼ��  
//	//{
//	//	*(numbers1 + 5 + n) = n + 5;
//	//	//printf("numbers1' new data: %d\n",*(numbers1+5+n));  
//	//}
//
//	printf("\n");
//
//	free(numbers1);//�ͷ�numbers1���˴�����Ҫ�ͷ�numbers1����Ϊ��realloc()ʱ�Ѿ��ͷ�  
//	numbers1 = NULL;
//	//free(numbers2);//�����ٴ��ͷ�  
//	while (1);
//	return 0;
//}