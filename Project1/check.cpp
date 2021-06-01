//#include <iostream>
//
//class CTest
//{
//private:
//	int m_num;
//	int* ptr;
//public:
//	CTest() {//디폴트생성자
//		printf("디폴트 생성자\n");
//		m_num = 0;
//		ptr = nullptr;
//	}
//	CTest(int num)
//	{
//		m_num = num;
//		ptr = nullptr;
//		printf("생성자 호출%d\n", m_num);
//	}
//	CTest(CTest &other)//복사생성자
//	{
//		this->m_num = other.m_num;
//		this->ptr = new int;
//		this->ptr = other.ptr;
//		printf("복사생성자 호출 : %d %p\n", m_num, ptr);
//	}
//	~CTest()
//	{
//		delete ptr;
//	}
//	CTest(int num, int* ptr)
//	{
//		this->m_num = num;
//		this->ptr = new int;
//		this->ptr = ptr;
//		printf("복사생성자 호출 : %d, %p\n", m_num, ptr);
//	}
//	void getData()
//	{
//		printf("%d\n", m_num);
//	}
//};
//
//int main()
//{
//	int a = 10;
//	int b(20);
//	int c(a);
//
//	printf("%d %d %d\n", a, b, c);
//
//	CTest c1(100);
//	CTest c2;
//	CTest c3(c1);//주소를 복사
//	CTest c4(50, nullptr);
//	CTest c5(c4);
//
//	c3.getData();
//	c5.getData();
//	return 0;
//}