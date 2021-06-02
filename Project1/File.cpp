#include <iostream>

class MyTest {
private:
	int x;
	int y;
public:
//	MyTest() {}

	MyTest(int a=0, int b=0)
	{
		x = a;
		y = b;
		printf("인수 2개 생성자\n");
	}
	MyTest& sum(MyTest& other)
	{
		MyTest t;
		t.x = x + other.x;
		t.y = y + other.y;
		return t;
	}
	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y)
	{
		printf("복사생성자 호출!!\n");
	}
	MyTest& operator +(MyTest& other)
	{
		MyTest t;
		t.x = x + other.x;
		t.y = y + other.y;
		return t;
	}
	MyTest& operator -(MyTest& other)
	{
		MyTest t;
		t.x = x - other.x;
		t.y = y - other.y;
		return t;
	}
	void printData()
	{
		printf("x = %d, y = %d\n", x, y);
		printf("-----------------\n");
	}
};
int main()
{
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	obj = obj1.sum(obj2);
	obj.printData();

	MyTest plus;
	plus = obj1 + obj2;
	plus.printData();

	MyTest minus;
	minus = obj1 - obj2;
	minus.printData();
	return 0;
}