#include <stdlib.h>
int get_luck(int *a, int b, int c);


int main(){
int m[8]={2,546,75,12,1000,9999, 51};
int luck = 0;
int non_luck = 0;
int res_RES = get_luck(m, luck, non_luck);
}

int get_luck(int *a, int b, int c){
int res;
for( int i = 0; i < 7; i++){
	int n = 0;
	n = a[i] / 1000;
	if ( n != 0){
	b = b + 1;
	res = b;
	}else{
	c = c + 1;
	}
	}
	return res;
}
