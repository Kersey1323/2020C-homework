#include<iostream>
using namespace std;
int main()
{
	int y1, y2, w;
	cout << "�밴�������" << endl;
	cin >> y1 >> y2;
	cout << "����������" << endl;
	cin >> w;
	double m = (y1 / 12 +(wchar_t) y2) * 0.0254;
	double b = w / 2.2;
	double x= m * m;
	double BMI = b / x;
	cout << "��������ָ��Ϊ��" << BMI << endl;
}