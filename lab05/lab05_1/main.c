#define N 8
int main () {
	int factorial = 1;
	int result;
	for (int i = 1; i <= N; i++) {
		factorial *= i;
	}
	result = 10 * factorial;
return 0;
}
