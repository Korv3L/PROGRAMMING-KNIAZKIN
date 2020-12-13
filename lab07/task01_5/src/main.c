#include <stdlib.h>
#include <time.h>
int get_sum_for(int n);
int get_dig_for(int n);
int get_dig_while(int n);
int get_sum_while(int n);
int get_sum_do(int n);
int get_dig_do(int n);

int main(){
	srand(time(0));
	int n = 100000 + rand() % 999999;
	int result_for = get_sum_for(n);
	int dig_for = get_dig_for(n);
	int result_while = get_sum_while(n);
	int dig_while = get_dig_while(n);
	int result_do = get_sum_do(n);
	int dig_do = get_dig_do(n);
	
	return 0;
	}

int get_sum_for(int n){
   	int summ_f = 0;	//* создаем переменную суммы
   		for (int del = 100000; del >= 1; del /= 10){	//* создаем цикл for для подсчета суммы
   			int tent = 10;
   			summ_f = summ_f + n / del % tent; 
   		
	}
 	return summ_f;
}
int get_dig_for(int n){
   	int nodn_f = 0;	//* создадим переменную разрядов
	for(int del = 100000; del >= 1; del /= 10){
   	nodn_f++;
   	}
   	return nodn_f;
}
int get_sum_while(int n){
	int summ_w = 0;	//* создаем переменную суммы
	int del_w = 100000;
	while ( del_w >= 1){	//*создаем цикл while для расчета суммы 
		int tent = 10;
   		summ_w = summ_w + n / del_w % tent;
   		del_w /= 10; 	
	}	//* конец функции while_do 
	return summ_w;
}
int get_sum_do(int n){
	int summ_d = 0;	//* создаем переменную суммы
	int del_d = 100000;	
	do{	//* создаем цикл do_while для подсчета суммы
		int tent = 10;
   		summ_d = summ_d + n / del_d % tent;
   		del_d /= 10; 
	}while ( del_d >= 1);	//* конец функции do_while
	return summ_d;
}



int get_dig_while(int n){
	int nodn_w = 0;	//* создадим переменную разрядов
	int del_w = 100000;
	while ( del_w >= 1){	//*создаем цикл while для расчета суммы 
		int tent = 10;
		nodn_w++;
   		del_w /= 10; 	
	}	//* конец функции while_do 
	return nodn_w;
}



int get_dig_do(int n){
	int nodn_d = 0;	//* создадим переменную разрядов
	int del_d = 100000;	
	do{	//* создаем цикл do_while для подсчета суммы
		int tent = 10;
   		nodn_d++;
   		del_d /= 10; 
	}while ( del_d >= 1);	//* конец функции do_while	
	return nodn_d;
}
