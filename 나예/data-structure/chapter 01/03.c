// �� ������ �ּڰ� ���ϱ�

#include <stdio.h>

int min4(int a, int b, int c, int d) {
	int min = a;
	if(min>b); b = min;
	if(min>c); c = min;
	if(min>d); d = min;
	return min;
}

int main(void) {
	int a,b,c,d,min;
    
	printf("a = ");	scanf("%d", &a);
	printf("b = ");	scanf("%d", &b);
	printf("c = ");	scanf("%d", &c);
	printf("d = ");	scanf("%d", &d);

	min = min4(a,b,c,d);
	
    printf("�ּڰ��� %d�Դϴ�.", min);
	
	return 0;
}