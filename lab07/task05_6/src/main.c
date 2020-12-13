#include <stdlib.h>
int get_summs(int *a, int *b);
int get_bigger(int *b);


int main(){
int N[] = {15, 71, 23, 4, 5786, 35, 25958, 12, 9};;
int result_bigger = get_bigger(N);
return 0;
}

int get_bigger(int *b){
int bigger = 0;
for (int i = 0; i != 10;i++){
	int summ = (b[i] / 10000 % 10) + (b[i] / 1000 % 10) + (b[i] / 100 % 10) + (b[i] / 10 % 10) + (b[i] % 10);
	int bigger_prev = (bigger / 10000 % 10) + (bigger / 1000 % 10) + (bigger / 100 % 10) + (bigger / 10 % 10) + (bigger% 10);
		if(summ > bigger_prev){
			bigger = b[i];
		}
}
return bigger;;
}


