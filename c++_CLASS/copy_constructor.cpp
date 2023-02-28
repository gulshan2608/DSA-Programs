#include <iostream>
#include <conio.h>

using namespace std;

class comp
{
    int a, b;

public:
    comp()
    {
    }

    comp(int A, int B)
    {
        a = A;
        b = B;
    }

    void display()
    {
        cout << "complex no is:" << endl;
        cout << a << "+i" << b << endl;
    }

    comp(comp & o)
    {
        a = o.a;
        b = o.b;
    }
};

int main()
{
    int c,d;
    cin>>c>>d;
    comp obj1(c,d);
    obj1.display();
    comp obj2;
    obj2 = obj1;
    obj2.display();
    return 0;
}