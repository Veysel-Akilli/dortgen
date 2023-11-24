#include<iostream>
using namespace std;

class dortgen {
private:
	int x, y;
public:

	dortgen(int a, int b);
	int alan();
	int cevre();

};

dortgen::dortgen(int a, int b)
{
	x = a;
	y = b;
}
int dortgen::alan()
{
	return x * y;
}
int dortgen::cevre()
{
	return 2 * x + 2 * y;
}

int main()
{
	dortgen kare(4, 4);
	dortgen dikdortgen(7, 3);
	cout << kare.alan() << endl;
	cout << kare.cevre() << endl;
	cout << dikdortgen.alan() << endl;
	cout << dikdortgen.cevre() << endl;

}
