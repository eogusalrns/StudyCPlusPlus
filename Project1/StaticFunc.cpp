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
//	static int cnt;//���� ��� ����
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
//	//	printf("���� ��ü ���� = %d\n", count);
//	//}
//};
//	//Simple::Simple()
//	//{
//
//	//}
//int Simple::cnt = 0;
//	void Simple::setName()
//	{
//		printf("�̸��� �Է��ϼ��� : ");
//		cin >> name;
//		//this->name = name;
//	}
//	void Simple::setAddr()
//	{
//		printf("�ּҸ� �Է��ϼ��� : ");
//		cin >> addr;
//	}
//	void Simple::setPhone()
//	{
//		printf("��ȣ�� �Է��ϼ��� : ");
//		cin >> phone;
//	}
//	//void Simple::setCnt()
//	//{
//	//	cnt = 0;
//	//}
//
//	void Simple::getName()
//	{
//		printf("�̸��� : %s\n", name);
//	}
//	void Simple::getAddr()
//	{
//		printf("�ּҴ� : %s\n", addr);
//	}
//	void Simple::getPhone()
//	{
//		printf("��ȣ�� : %d\n", phone);
//	}
//	void Simple::getCnt()
//	{
//		printf("ī��Ʈ�� : %d\n", cnt);
//	}
//
////int Simple::count;
//
//int main()
//{
//	Simple s;
//	//s.setCnt();//���� ���� 0���� �ʱ�ȭ
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
//	//printf("ũ�� = %d\n", sizeof(s));
//}