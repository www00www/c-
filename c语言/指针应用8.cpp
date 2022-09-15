//#include <stdio.h>
//
//int main()
//{
//	double score[3][4] = { { 65, 57, 70, 60 }, { 58, 87, 90, 81 }, { 90, 90, 100, 98 } };
//	void search(double fen[][4],int n);
//	search(score, 3);
//	while (1);
//}
//
//void search(double fen[][4], int n)
//{
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < 4; j++)
//		{
//			if (fen[i][j] < 60.0)  flag = 1;
//		}
//
//		if (flag == 1)
//		{
//			for (j = 0; j < 4; j++)
//			{
//				printf("%5.2lf  ", fen[i][j]);
//			}
//			printf("\n");
//		}
//		
//	}
//
//}