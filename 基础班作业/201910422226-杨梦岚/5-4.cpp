#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the number of seconds:";
	long long seconds;
	cin >> seconds;
	const int a = 60;//�룬��
	const int b = 60;//�֣�Сʱ
	const int c = 24;//Сʱ����

	int sec = seconds % a;//������
	int min = seconds / a;

	int min1 = min % b;
	int hour = min / b;

	int hour1 = hour % c;
	int day = hour / c;//������

	cout << seconds << "seconds=" << day << "day," << hour + hour1 << "hours," << min + min1 << "mintues," << sec << "seconds" << endl;
	return 0;

}