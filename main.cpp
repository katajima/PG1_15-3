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


/// <summary>
/// test01
/// </summary>
/// <returns></returns>
int main() {

	return 0;
}