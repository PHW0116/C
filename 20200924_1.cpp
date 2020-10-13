#include<stdio.h>

int main(void)
{
	int	twice = 9;			//integer	interger
	int ssak3 = 3;
	
	float bts = 10.556738478340683945879524358243976534654762376547623;			//floating point 소수점  실수 
	double bp = 4.1992398793792989723784567890439876849576389087685472;
	
	char munja = '*';			//character
	
	printf("트와이스의 맴버 수는 %d명입니다.\n", twice);			//decimal 십진수 
	printf("싹쓰리의 맴버 수는 %d명입니다.\n", ssak3);
	
	printf("bts의 맴버 수는 %.10f명입니다.\n", bts);
	printf("블랙핑크의 맴버 수는 %.16lf명입니다.\n", bp);
	
	printf("문자는 %c입니다.\n", munja);
	
	return 0;
}
