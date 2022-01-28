#include<iostream>
using namespace std;

class gamma;
class beta;
class alpha
{
public:
	alpha(void);
	alpha(int test);
	~alpha();
	void set_data(int value);
	friend void calculation(alpha, beta, gamma);
private:
	int data_1;
};

alpha::alpha(void)
{
	data_1 = 0;
}

alpha::alpha(int test)
{
	data_1 = test;
}

void alpha::set_data(int value)
{
	data_1 = value;
}

alpha::~alpha()
{
}

class beta
{
public:
	beta(void);
	beta(int test);
	~beta();
	void set_data(int value);
	friend void calculation(alpha, beta, gamma);
private:
	int data_2;
};

beta::beta(void)
{
	data_2 = 0;
}

beta::beta(int test)
{
	data_2 = test;
}

void beta::set_data(int value)
{
	data_2 = value;
}

beta::~beta()
{
}


class gamma
{
public:
	gamma(void);
	gamma(int test);
	~gamma();
	void set_data(int value);
	friend void calculation(alpha, beta, gamma);
private:
	int data_3;
};

gamma::gamma(void)
{
	data_3 = 0;
}

gamma::gamma(int test)
{
	data_3 = test;
}

void gamma::set_data(int value)
{
	data_3 = value;
}

gamma::~gamma()
{
}


void calculation(alpha object_1, beta object_2, gamma object_3)
{
	if (object_1.data_1 > object_2.data_2 && object_1.data_1 > object_3.data_3)
	{
		cout << "Largest number is " << object_1.data_1;
	}
	else if (object_2.data_2 > object_1.data_1 && object_2.data_2 > object_3.data_3)
	{
		cout << "Largest number is " << object_2.data_2;
	}
	else
	{
		cout << "Largest number is " << object_3.data_3;
	}
}

int main()
{
	alpha a;
	beta b;
	gamma c;
	int number_1;
	int number_2;
	int number_3;
	cout << "Enter a number : ";
	cin >> number_1;
	cout << "Enter another number : ";
	cin >> number_2;
	cout << "Enter another number : ";
	cin >> number_3;
	a.set_data(number_1);
	b.set_data(number_2);
	c.set_data(number_3);
	calculation(a, b, c);
	return 0;
}