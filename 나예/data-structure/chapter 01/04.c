// �߾Ӱ� ���ϱ�

#include <stdio.h>

int med3(int a, int b, int c) {
	int med = a;
	if(a>=b) 
		if(b>=c) return b;
		else if(c>=a) return a;
		else return c;
	else if (a>c) return a;
	else if (b>c) return c;
	else return b;
}

int main(void) {
	int a,b,c;
	printf("�� ������ �߾Ӱ��� ���մϴ�.\n");
	printf("a�� : "); scanf("%d", &a);
	printf("b�� : "); scanf("%d", &b);
	printf("c�� : "); scanf("%d", &c);
	
	printf("�߾Ӱ��� %d�Դϴ�.", med3(a,b,c));
	
	return 0;
}