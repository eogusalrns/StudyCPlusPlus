//#include <stdio.h>
//class Date;
//class Time
//{
//	friend class Date;
//private:
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
//	void OutToday(Date& d)
//	{
//		printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n", d.year, d.month, d.day, hour, min, sec);
//	}
//};
//
//class Date
//{
//	friend class Time;
//private:
//	int year, month, day;
//public:
//	Date(int y, int m, int d) { year = y; month = m; day = d; }
//
//};
//
//int main()
//{
//	Date d(2018, 06, 29);
//	Time t(12, 34, 56);
//	t.OutToday(d);
//}