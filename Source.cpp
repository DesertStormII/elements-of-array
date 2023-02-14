#include <iostream>
using namespace std;

int main ()
{
	int a, s, d, f, g, h;
	
	cout << " Enter number(¹1)";
	cin >> a;
	cout << " Enter number(¹2)";
	cin >> s;
	cout << " Enter number(¹3)";
	cin >> d;
	cout << " Enter number(¹4)";
	cin >> f;
	cout << " Enter number(¹5)";
	cin >> g;
	cout << " Enter number(¹6)";
	cin >> h;
	int array1[] = { a,234,s,3,4,d,234,f,234,g,h,234 };
	for (int i = 0; i < 12; i++) {
		cout << array1[i] << endl;
	}
	return 0;
}