#include <iostream>

using namespace std;

ostream & fn(ostream & output)
{
	return output << "first number = ";
}
ostream & sn(ostream & output)
{
	return output << "second number = ";
}


class Calculator
{
	public:
	void add(long double a,long double b) {
		cout.setf(ios::fixed,ios::floatfield);
		cout << a << " + " << b << " = " << a+b << endl;
	}
	void dif(long double a,long double b) {
		cout << a << " - " << b << " = " << a-b << endl;
	}
	void prod(long double a,long double b) {
		cout << a << " x " << b << " = " << a*b << endl;
	}
	void quo(long double a,long double b);
	void mod(long a,long b);
	void pow(long double a,long b); 
	void sqr(long double a);
	void cub(long double a);
	void er(void) {
		cout <<"error encountered please check the input";
	}
};

int main(int argc, char const *argv[])
{
	int fin;
	int sinu;
	int kj;
	int chc;
	int wh;
	int wh2;
	int kj2;
	Calculator calc;
	do{ 
	
		cout << "Choose an option\n1.Standerd Calculator\n2.Scientific Calculator\n3.Quit\n";
		cin >> chc;

		if (chc == 1) {
			wh = 1;
			do{
			cout <<"choose an option\n1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Modulus\n6.Return to previous menu\n";
			cin >> kj;
			if (kj == 1) {
				cout << fn;
				cin >>fin;
				cout << endl << endl << sn;
				cin >>sinu;
				cout << endl;
				calc.add(fin,sinu);
			}
			if (kj == 2) {
				cout << fn;
				cin >>fin;
				cout << endl << endl << sn;
				cin >>sinu;
				cout << endl;
				calc.dif(fin,sinu);
			}
			if (kj == 3) {
				cout << fn;
				cin >>fin;
				cout << endl << endl << sn;
				cin >>sinu;
				cout << endl;
				calc.prod(fin,sinu);
			}
			if (kj == 4) {
				cout << fn;
				cin >>fin;
				cout << endl << endl << sn;
				cin >>sinu;
				cout << endl;
				calc.quo(fin,sinu);
			}
			if (kj == 5) {
				cout << fn;
				cin >>fin;
				cout << endl << endl << sn;
				cin >>sinu;
				cout << endl;
				calc.mod(fin,sinu);
			}
			if (kj == 6) {
				wh = 3;
			}
			else
			{
				cout << "invalid value";
			}
			}while (wh != 3);	
		}
		if (chc == 2)
		{
			wh2 = 1;
			do
			{
				cout << "Choose an option\n1.Power\n2.Square\n3.Cube\n4.Return to previous menu\n";
				cin >> kj2;
				if (kj2 == 1) {
				cout << fn;
				cin >>fin;
				cout << endl << endl << sn;
				cin >>sinu;
				cout << endl;
				calc.pow(fin,sinu);
			}
			if (kj2 == 2) {
				cout << fn;
				cin >>fin;
				cout << endl << endl;
				calc.sqr(fin);
			}
			if (kj2 == 3) {
				cout << fn;
				cin >>fin;
				cout << endl << endl; 
				calc.cub(fin);
			}
			if (kj2 == 4) {
				wh2 = 3;
			}
			}while (wh2 != 3);
		}
	}while (chc != 3);
	return 0;
}






void Calculator :: quo(long double a,long double b)
{
	if (a and b != 0)
	{
		cout << a << " / " << b << " = " << a/b << endl;
	}
	else
	{
		cout << "Zero division error" << endl;
	}
}
void Calculator :: mod(long a ,long b)
{
	if (a and b != 0)
	{
		cout << a << " modulus " << b << " = " << a%b << endl;
	}
	else 
	{
		cout << "Zero division error" << endl;
	}
}
void Calculator :: pow(long double a, long b)
{
	long i;
	long double l = a;
	for (i=0;i<(b-1);i++)
	{
		l = l * a;
	}
	cout.setf(ios::fixed,ios::floatfield);
	cout << a << " ^ " << b << " = " << l << endl;
}
void Calculator :: sqr(long double a)
{
	cout << a <<" square = " << a*a<< endl;
}
void Calculator :: cub(long double a)
{
	cout << a << " cube = " << a*a*a << endl;
}


