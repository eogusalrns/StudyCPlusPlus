//#include <stdio.h>
//
//class Time
//{
//private:
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s)
//	{
//		SetHour(h);
//		SetMinute(m);
//		sec = s;
//	}
//
//	int GetHour() { return hour; }
//	int GetMinute() { return min; }
//	int GetSecond() { return sec; }
//
//	void SetHour(int h)
//	{
//		if (h >= 0 && h < 24)
//			hour = h;
//	}
//
//	void SetMinute(int m)
//	{
//		if (m >= 0 && m < 60)
//			min = m;
//	}
//
//	void OutTime()
//	{
//		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
//	}
//};
//
//int main()
//{
//	Time now(12, 34, 56);
//	now.SetHour(40);
//	now.OutTime();
//	now.SetHour(9);
//	now.OutTime();
//}