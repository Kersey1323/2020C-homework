#include<stdio.h>
int main() {
	int a, b, c;
	printf("�����룺��\n");
	scanf_s("%d", &a);
	printf("�����룺��\n");
	scanf_s("%d", &b);
	printf("�����룺��\n");
	scanf_s("%d", &c);
	float d, e, f;
	f = 0.01667;
	d = b + (f * c);
	e = a + (f * d);
	printf("γ����%f��",e);
}