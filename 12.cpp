#include<iostream>

//һӢ�ߵ���0.0254��   һǧ�˵�2.2��
using namespace std;
int main(void)
{
	const double a = 12;//�����������
	const double b = 0.0254;
	const double c = 2.2;
	double height_f, height_i, weight_p;//pΪӢ�� i Ϊ��

	cout << "����������(�Լ�Ӣ�߼�Ӣ��ķ�ʽ):";
	cin >> height_f >> height_i;
	cout << "�����������(�԰�Ϊ��λ):";
	cin >> weight_p;

	double height_meters = height_f * a * b + height_i * b;
	double weight_kg = weight_p * c;
	double BMI = weight_kg / (height_meters * height_meters);

	cout << "��������:" << height_meters << "�� " << "������:" << weight_kg << "ǧ��"
		<< " BMI��:" << BMI << endl;
	return 0;

}