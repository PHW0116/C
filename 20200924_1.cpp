#include<stdio.h>

int main(void)
{
	int	twice = 9;			//integer	interger
	int ssak3 = 3;
	
	float bts = 10.556738478340683945879524358243976534654762376547623;			//floating point �Ҽ���  �Ǽ� 
	double bp = 4.1992398793792989723784567890439876849576389087685472;
	
	char munja = '*';			//character
	
	printf("Ʈ���̽��� �ɹ� ���� %d���Դϴ�.\n", twice);			//decimal ������ 
	printf("�Ͼ����� �ɹ� ���� %d���Դϴ�.\n", ssak3);
	
	printf("bts�� �ɹ� ���� %.10f���Դϴ�.\n", bts);
	printf("����ũ�� �ɹ� ���� %.16lf���Դϴ�.\n", bp);
	
	printf("���ڴ� %c�Դϴ�.\n", munja);
	
	return 0;
}
