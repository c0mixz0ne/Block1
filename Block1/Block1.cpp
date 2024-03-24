#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int Min(int k)
{
	return k - 1;
}

int main()
{

	int k, x, a;
	printf("Enter k: ");
	scanf("%d", &k);
	printf("Enter x: ");
	scanf("%d", &x);
	if (k == 1) {
		printf("x is %d", x);
		return x;
	}
	else {
		a = Min(k);
		if (a < x) {
			printf("a is %d", a);
			return a;
		}
		else {
			printf("x is %d", x);
			return x;
		}
	}

}