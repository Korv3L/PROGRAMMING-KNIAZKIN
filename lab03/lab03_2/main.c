int main () {
	int full = 4286;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int sum = 0;
	num1 = (full - (full % 1000)) / 1000;
	num2 = ((full - (full %100)) - (full % 1000)) / 100;
	num3 = ((full - (full % 10)) - (full % 100)) / 10;
	num4 = full % 10;
	return 0;
}
