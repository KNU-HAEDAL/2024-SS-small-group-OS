// 중앙값 구하기

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
	printf("세 정수의 중앙값을 구합니다.\n");
	printf("a값 : "); scanf("%d", &a);
	printf("b값 : "); scanf("%d", &b);
	printf("c값 : "); scanf("%d", &c);
	
	printf("중앙값은 %d입니다.", med3(a,b,c));
	
	return 0;
}