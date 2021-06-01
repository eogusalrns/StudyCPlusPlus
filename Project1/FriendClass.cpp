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
//		printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n", d.year, d.month, d.day, hour, min, sec);
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