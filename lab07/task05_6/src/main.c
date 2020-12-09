#include <stdlib.h>
int get_summs(int *a, int *b);
int get_bigger(int *b);


int main(){
int N[] = {15, 71, 23, 4, 5786, 35, 25958, 12, 9};
int C[9] = {};
get_summs(N, C);
int result_bigger = get_bigger(C);
return 0;
}

int get_summs(int *a, int *b){
	for (int i = 0; i < 9; i++){
	b[i] = (a[i] / 10000 % 10) + (a[i] / 1000 % 10) + (a[i] / 100 % 10) + (a[i] / 10 % 10) + (a[i] % 10);
	}
	return *b;
}

int get_bigger(int *b){
int result;
for(int i = 0; i < 9; i++){
	if(b[i] >= b[0]){
		if(b[i] >= b[1]){
			if(b[i] >= b[2]){
				if(b[i] >= b[3]){
					if(b[i] >= b[4]){
						if(b[i] >= b[5]){
							if(b[i] >= b[6]){
								if(b[i] >= b[7]){
									if(b[i] >= b[8]){
									result = b[i];
									}
								}
							}
						}
					}
				}
			}
		}
	}else{
	continue;
	}
}
return result;
}


