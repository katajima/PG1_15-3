#include<stdio.h>


int Clamp(int a, int b, int c) {
	if (b > a&&b>c&&a<c) {

		c = b;

		return c = b;
	}
	else
	{
		c = b;
		
		return c = b;
	}
}



int main() {

	int min = 0;
	int max = 1;
	int num = 0;

	while (true)
	{

		printf("�ŏ��l(min)����͂��Ă������� : ");
		scanf_s("%d", &min);
		printf("�ő�l(max)����͂��Ă������� : ");
		scanf_s("%d", &max);
		printf("min�`max�͈̔͂Ő���������num�̒l����͂��Ă������� : ");
		scanf_s("%d", &num);

		Clamp(min, max, num);

		printf("�l�𐧌��������� : %d", max);
		printf("\n");
	}

	return 0;
}