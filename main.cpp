#include<stdio.h>

//a�͔͈́@b�͍ŏ��l�@c�͍ő�l
int Clamp(int a, int b, int c) {
	if (a>c){
		return a = c;
	}
	if (b>a) {
		return a = b;
	}
	else {
		return a;
	}
}



int main() {

	int min = 0;
	int max = 0;
	int num = 0;

	while (true)
	{

		printf("�ŏ��l(min)����͂��Ă������� : ");
		scanf_s("%d", &min);
		printf("�ő�l(max)����͂��Ă������� : ");
		scanf_s("%d", &max);
		printf("min�`max�͈̔͂Ő���������num�̒l����͂��Ă������� : ");
		scanf_s("%d", &num);

		num =Clamp(num, min, max);

		printf("�l�𐧌��������� : %d", num);
		printf("\n");
	}

	/////////////////

	return 0;
}