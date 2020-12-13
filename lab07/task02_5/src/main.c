#include <stdlib.h>
#include <time.h>
int get_rev_for(int n);
int get_rev_while(int n);
int get_rev_do(int n);

int main(){
	srand(time(0));
	int n = 100000 + rand() % 999999;
	
	int result_for = get_rev_for(n);
	int result_while = get_rev_while(n);
	int result_do = get_rev_do(n);
	}
	
int get_rev_for(int n){
	int r_f = 0;	//* змінна оберненого числа у циклі for
	for(int n_f = n; n_f != 0;){
	r_f *= 10;
	r_f += (n_f % 10);
	n_f /= 10;
	}
	return r_f;
}
    
    
int get_rev_while(int n){
	int r_w = 0;	//* змінна оберненого числа у циклі while
	int n_w = n;	//* змінна початкового числа для перестановки числа
	while(n_w != 0 ){
	r_w *= 10;
	r_w += (n_w % 10);
	n_w /= 10;
	}
	return r_w;
}
int get_rev_do(int n){
	int r_d = 0;	//* змінна оберненого числа у циклі do
	int n_d = n;	//* змінна початкового числа для перестановки числа
	do{
	r_d *= 10;
	r_d += (n_d % 10);
	n_d /= 10;
	}while( n_d != 0 );
	return r_d;
}
