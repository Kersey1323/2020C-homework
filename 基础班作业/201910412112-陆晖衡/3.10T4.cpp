#include<stdio.h>
int main() {
	long int s;
	printf("�����룺��\n");
	scanf_s("%ld", &s);
	int a, b, c, d, e, f;
	a = s % 60;
	b = (s - a);
	c = (b / 60);
	d = (c / 60);
	e = (d / 24);
	c = (c - (60 * d));
	c = (c - (1440 * e));
	d = (d - (24 * e));
	


	printf("%ld��=%d��%dʱ%d��%d��",s,e,d,c,a );

}