#include <stdio.h>

int main(void)
{
	int first, second;
	
	printf("ù��° ���� �Է��ϼ��� \n");
	scanf("%d", &first);
	printf("�ι�° ���� �Է��ϼ��� \n");
	scanf("%d", &second);
	
	printf("%d�� %d�� ���ϱ�� %d �Դϴ�. \n", first, second, first+second);
	printf("%d�� %d�� ����� %d �Դϴ�. \n", first, second, first-second);
	printf("%d�� %d�� ���ϱ�� %d �Դϴ�. \n", first, second, first*second);
	printf("%d�� %d�� ������� %d �Դϴ�. \n", first, second, first/second);
	printf("%d�� %d�� �������� %d �Դϴ�. \n", first, second, first%second);
	printf("%d�� %d�� ��Ȯ�� ������� %.15f �Դϴ�. \n", first, second, (double)first/second);
	
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first>second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first<second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first<=second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first>=second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first==second);
	printf("%d�� %d�� �� %d �Դϴ�. \n", first, second, first!=second);
	
	return 0;
}

