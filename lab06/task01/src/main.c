int main() {
int values[4][4] = { -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};
int number = values[1][2];
int prev = number - 1;
int next = number + 1;
int num_max = values[3][3];
int num_min = values[0][0];
int count_prev = num_min - prev;
if(count_prev < 0){
	count_prev = -1 * count_prev;
	}else{
	count_prev = count_prev * 1;
	}
int count_next = num_max - next;
if(count_next < 0){
	count_next = -1 * count_next;
	}else{
	count_next = count_next * 1;
	}

return 0;
}
