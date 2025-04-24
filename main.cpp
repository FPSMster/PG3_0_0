#include"stdio.h"

template<typename T,typename T2>
T Min(T a, T2 b) {
	if (a<b){
		return a;
	}
	if (a > b) {
		return b;
	}
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}

int main() {

	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%lf\n", Min<double>(11.4, 51.4));
	printf("%c\n", Min<char>('a', 'b'));

	return 0;
}

