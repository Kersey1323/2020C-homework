#include<iostream>
using namespace std;
int main()
{
	const int h=12;
	const double g=0.0254;
	const double n=2.2;

	int a,b,d;
	double c,e,f;
	cout << "����Ӣ�磬Ӣ�ߣ�����" << endl;
	cout << "����Ӣ��:" << endl;
	cin >> a;
	cout << "����Ӣ��:" << endl;
	cin >> b;
	c = ((h * a) + b)*g;
	cout << "��������:" << endl;
	cin >> d;
	e = d * n;
	f = e / c;
	cout << f << endl;
	return 0;
}