#include <iostream>

using namespace std;

class bClass
{
public:
void print() const;
bClass(int a = 0, int b = 0);
//Postcondition: x = a; y = b;

private:
int x;
int y;
};

class dClass: public bClass
{
public:
void print() const;
dClass(int a = 0, int b = 0, int c = 0);
//Postcondition: x = a; y = b; z = c;

private:
int z;
};

int main()
{
bClass bObject(2, 3);
dClass dObject(3, 5, 8);

bObject.print();
cout << endl;
dObject.print();
cout << endl;

return 0 ;
}

void bClass::print() const
{
cout << x << " " << y << endl;
}

bClass::bClass(int a, int b)
{
x = a;
y = b;
}

void dClass::print() const
{
bClass:print();
cout << " " << z << endl;
}

dClass::dClass(int a, int b, int c)
: bClass(a, b)
{
z = c;
}