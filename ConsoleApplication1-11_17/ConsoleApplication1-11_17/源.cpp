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
	// �ú����ǻ������Ԫ����
	// �����ڸú����з��ʻ��ౣ������˽�еĳ�Ա
	B b;
	b._b = 10;

	// ���ܷ���������˽�л��߱����ĳ�Ա
	D d;
	d._d = 10;

	// ���ۣ���Ԫ��ϵ ���ܱ��̳�
	// �̳У�����һ���̳е��ǻ����еĳ�Ա
	// ���ӣ���ְֵ�����ҵĲƲ�--�����޹�
}
#endif
