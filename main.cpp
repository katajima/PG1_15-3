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

	return 0;
}