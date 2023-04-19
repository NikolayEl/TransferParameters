#include <iostream>


using namespace std;

void Exchange(int* a, int* b);

void main()
{
	string delimetr = "--------------------";
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << endl << "In main" << endl << endl;
	cout << a << "\t \t \t" << b << endl;
	cout << &a << "\t"  << &b << endl;
	cout << delimetr << endl << delimetr << endl;
	cout << endl <<"In finction" << endl << endl;
	Exchange(&a, &b);
	cout << endl << delimetr << endl << delimetr << endl;
	cout << endl << "After exchange" << endl << endl;
	cout << a << "\t \t \t" << b << endl;
	cout << &a << "\t" << &b << endl;

}

void Exchange(int* a, int* b)
{
	cout << *a << "\t \t \t" << *b << endl;
	cout << a << "\t" << b << endl;
	int buffer = *a;
	*a = *b;
	*b = buffer;
	cout << *a << "\t \t \t" << *b << endl;
	cout << a << "\t" << b << endl;
}

