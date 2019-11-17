#define _CRT_SECURE_NO_WARNINGS 1
class B
{
public:
	void Test()
	{
		cout << "B:" << &_count << endl;
	}
	static int _count;
};

int B::_count = 0;

class D1 : public B
{
public:
	void TestFunc()
	{
		cout << "D1:" << &_count << endl;
		_count = 10;
	}
};

class D2 : public B
{
public:
	void TestFunc()
	{
		cout << "D2:" << &_count << endl;
		_count = 10;
	}
};

int main()
{
	B b;
	b.Test();

	D1 d1;
	d1.TestFunc();

	D2 d2;
	d2.TestFunc();
	return 0;
}
#endif

#if 0
class B
{
	friend void TestFunc();
public:

protected:
	int _b;
};

class D : public B
{
protected:
	int _d;
};


void TestFunc()
{
	// 该函数是基类的友元函数
	// 可以在该函数中访问基类保护或者私有的成员
	B b;
	b._b = 10;

	// 不能访问子类中私有或者保护的成员
	D d;
	d._d = 10;

	// 结论：友元关系 不能被继承
	// 继承：子类一定继承的是基类中的成员
	// 例子：你爸爸的王哥家的财产--与你无关
}
#endif
