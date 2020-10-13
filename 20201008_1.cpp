#include <stdio.h>

int main(void)
{
	int first, second;
	
	printf("첫번째 값을 입력하세요 \n");
	scanf("%d", &first);
	printf("두번째 값을 입력하세요 \n");
	scanf("%d", &second);
	
	printf("%d와 %d의 더하기는 %d 입니다. \n", first, second, first+second);
	printf("%d와 %d의 빼기는 %d 입니다. \n", first, second, first-second);
	printf("%d와 %d의 곱하기는 %d 입니다. \n", first, second, first*second);
	printf("%d와 %d의 나누기는 %d 입니다. \n", first, second, first/second);
	printf("%d와 %d의 나머지는 %d 입니다. \n", first, second, first%second);
	printf("%d와 %d의 정확한 나누기는 %.15f 입니다. \n", first, second, (double)first/second);
	
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first>second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first<second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first<=second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first>=second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first==second);
	printf("%d와 %d의 비교 %d 입니다. \n", first, second, first!=second);
	
	return 0;
}

