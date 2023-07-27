#include<stdio.h>

//aは範囲　bは最小値　cは最大値
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