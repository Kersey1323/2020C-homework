#include<stdio.h>
int main() {
	long int a, b;
	printf("�����������˿ڣ�\n");
	scanf_s("%ld", &a);
	printf("�������й��˿ڣ�\n");
	scanf_s("%ld", &b);

	float c;
	c =(float) b / a * 100;

	printf("�й��˿�ռ�����˿ڵ�%f%%", c);

}