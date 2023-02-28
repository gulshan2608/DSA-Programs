#include<iostream>
#include<conio.h>
using namespace std;
class second;
class first
{
	private:int value1;
	public:friend void sum(first A, second B);
			void getsum(int a);
};
void first::getsum(int a)
	{
		value1=a;
	}
class second
{
	private:int value2;
	public:friend void sum(first A, second B);
			void getvalue(int b);
};
void second::getvalue(int b)
{
	value2=b;
}
void sum(first A, second B)
{
	int x=A.value1;
	int y=B.value2;
	cout<<"sum="<<x+y;
}
	int main()
{
	first f;
	second s;
	f.getsum(100);
	s.getvalue(120);
	sum(f,s);
	getch();
	return 0;
}
	

