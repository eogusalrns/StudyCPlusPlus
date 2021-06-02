//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//
//class Simple
//{
//private:
//	char name[20];
//	int phone;
//	char addr[100];
//	static int cnt;//정적 멤버 변수
//
//	//int value;
//	//static int count;
//public:
//	Simple() { cnt++; }
//	~Simple() { cnt--; }
//	void setName();
//	void setPhone();
//	void setAddr();
//	void setCnt();
//
//	void getName();
//	void getPhone();
//	void getAddr();
//	void getCnt();
//	//Simple() { count++; }
//	//~Simple() { count--; }
//	//static void InitCount()
//	//{
//	//	count = 0;
//	//}
//	//static void OutCount()
//	//{
//	//	printf("현재 객체 개수 = %d\n", count);
//	//}
//};
//	//Simple::Simple()
//	//{
//
//	//}
//int Simple::cnt = 0;
//	void Simple::setName()
//	{
//		printf("이름을 입력하세요 : ");
//		cin >> name;
//		//this->name = name;
//	}
//	void Simple::setAddr()
//	{
//		printf("주소를 입력하세요 : ");
//		cin >> addr;
//	}
//	void Simple::setPhone()
//	{
//		printf("번호를 입력하세요 : ");
//		cin >> phone;
//	}
//	//void Simple::setCnt()
//	//{
//	//	cnt = 0;
//	//}
//
//	void Simple::getName()
//	{
//		printf("이름은 : %s\n", name);
//	}
//	void Simple::getAddr()
//	{
//		printf("주소는 : %s\n", addr);
//	}
//	void Simple::getPhone()
//	{
//		printf("번호는 : %d\n", phone);
//	}
//	void Simple::getCnt()
//	{
//		printf("카운트는 : %d\n", cnt);
//	}
//
////int Simple::count;
//
//int main()
//{
//	Simple s;
//	//s.setCnt();//정적 변수 0으로 초기화
//	s.setName();
//	s.setAddr();
//	s.setPhone();
//	s.getAddr();
//	s.getName();
//	s.getPhone();
//	s.getCnt();
//	//Simple::InitCount();
//	//Simple::OutCount();
//	//Simple s, * ps;
//	//Simple::OutCount();
//	//ps = new Simple;
//	//Simple::OutCount();
//	//delete ps;
//	//Simple::OutCount();
//	//printf("크기 = %d\n", sizeof(s));
//}