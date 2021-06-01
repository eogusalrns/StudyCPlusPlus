//#include <stdio.h>
//
//typedef struct
//{
//	int num;
//	char name[20];
//	double weight;
//}Fitness;
//
//Fitness* ary[100];
//
//void total_number(int count)
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (ary[i]->num > 0)
//			count++;
//	}
//}
//
//double average_weight(Fitness** pary, int count)
//{
//	int total = 0, count = 0,avg;
//	for (int i = 0; i < 100; i++)
//	{
//		if (pary[i]->weight != 0)
//		{
//			total += pary[i]->weight;
//			count++;
//		}
//	}
//	avg = total / count;
//}
//
//int max_weight(Fitness** pary, int count)
//{
//	int max = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (pary[i]->weight > max)
//		{
//			max = pary[i]->weight;
//			count = i;
//		}
//	}
//}
//
//void print_info(Fitness** pary, int index)
//{
//	printf("%d 번째 회원의 회원번호 : %d, 이름 : %s, 체중 : %lf", index, pary[index]->num, pary[index]->name, pary[index]->weight);
//}
//
//void free_ary(Fitness** pary, int count)
//{
//
//}
//
//int main()
//{
//	int count = 0;
//	total_number(count);
//}