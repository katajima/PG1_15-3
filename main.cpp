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

		printf("最小値(min)を入力してください : ");
		scanf_s("%d", &min);
		printf("最大値(max)を入力してください : ");
		scanf_s("%d", &max);
		printf("min～maxの範囲で制限したいnumの値を入力してください : ");
		scanf_s("%d", &num);

		Clamp(min, max, num);

		printf("値を制限した結果 : %d", max);
		printf("\n");
	}

	return 0;
}