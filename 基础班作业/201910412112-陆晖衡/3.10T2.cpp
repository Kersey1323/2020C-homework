#include<stdio.h>
int main() {
	int a, b, c;
	printf("�û�������룺Ӣ�ߣ�Ӣ��\n");
	scanf_s("%d%d", &a, &b);
	c = (12 * a + b);
	float d;
	d = (c * 0.0254);
	int e;
	printf("�û���������:��\n");
	scanf_s("%d", &e);
	float f;
	f = (1 / 2.2 * e);
	int g;
	g = (f / (d * d));
	printf("�û���BMIֵ��%d", g);

}