// 매개변수 이용 ; 최댓값 구하기

#include <stdio.h>

int max3(int a, int b, int c) {
	int max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	return max;
}

int main(void) {
	printf("max3(%d,%d,%d) = %d\n", 3,2,1, max3(3,2,1));
	printf("max3(%d,%d,%d) = %d\n", 5,8,1, max3(5,8,1));
	printf("max3(%d,%d,%d) = %d\n", 9,15,20, max3(9,15,20));
	printf("max3(%d,%d,%d) = %d\n", 6,8,1, max3(6,8,1));
	printf("max3(%d,%d,%d) = %d\n", 200,4,500, max3(200,4,500));


	return 0;
}