int main() {
int values[4][4] = { -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};
int number = values[2][3];
int prev = number - 1;
int next = number + 1;
int num_max = values[3][3];
int num_min = values[0][0];
int a = num_min - prev;
	if(a < 0){
	a = -1 * a;
	}else{
	a = a * 1;
	}
	int b = num_max - next;
	if(b < 0){
	b = -1 * b;
	}else{
	b = b * 1;
	}
	return 0;
}

