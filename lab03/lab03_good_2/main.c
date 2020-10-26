int main () {
	int full = 4286;
	int num1 , num2 , num3, num4, sum;
	num1 = full / 1000;
	num2 = full / 100 % 10;
	num3 = full / 10 % 10;
	num4 = full % 10;
	sum = num1 + num2 + num3 + num4;
	return 0;
}
