/*4.��дһ������Ҫ���û���������ʽ����������ʹ��long��long long�����洢����
Ȼ�����졢Сʱ�����Ӻ���ķ�ʽ��ʾ���ʱ�䡣ʹ�÷��ų�������ʾÿ���ж���Сʱ��
ÿСʱ�ж��ٷ����Լ�ÿ�����ж����롣�ó�������Ӧ���������ƣ�
Enter the number of seconds:31600000
31600000 seconds = 365 days,17 hours,46 minutes,40 seconds
*/
#include<iostream>
using namespace std;
int main()
{
	const int a = 60;
	const int b = 24;
	cout << "Enter the number of seconds:";
	long int seconds;
	cin >> seconds;
	int day = seconds / a / a / b;
	int hour = seconds / a / a - day*b;
	int minutes = seconds / a - day * b * a;
	cout << seconds << "seconds =" << day << "days," << hour << "hours," << minutes << "minutes," << seconds - day * b * a * a << "seconds" << endl;
	return 0;

}