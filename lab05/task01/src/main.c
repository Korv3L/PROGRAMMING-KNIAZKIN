#define N 298475	//* вводим наше число
int main(){	//* создаем функцию
	//* FOR	
   	int summ_f = 0;	//* создаем переменную суммы
   	int nodn_f = 0;	//* создадим переменную разрядов
   		for (int del = 100000; del >= 1; del /= 10){	//* создаем цикл for для подсчета суммы
   			int tent = 10;
   			summ_f = summ_f + N / del % tent; 
   			nodn_f++;  			
   		}	//* конец функции for
   	
   	
   	//* WHILE_DO
   	
	int summ_w = 0;	//* создаем переменную суммы
	int nodn_w = 0;	//* создадим переменную разрядов
	int del_w = 100000;
	while ( del_w >= 1){	//*создаем цикл while для расчета суммы 
		int tent = 10;
   		summ_w = summ_w + N / del_w % tent; 
   		nodn_w++;
   		del_w /= 10; 	
	}	//* конец функции while_do 
	
	//* DO_WHILE
	
	int summ_d = 0;	//* создаем переменную суммы
	int nodn_d = 0;	//* создадим переменную разрядов
	int del_d = 100000;	
	do{	//* создаем цикл do_while для подсчета суммы
		int tent = 10;
   		summ_d = summ_d + N / del_d % tent; 
   		nodn_d++;
   		del_d /= 10; 
	}while ( del_d >= 1);	//* конец функции do_while	
return 0;	
}	//* конец функции программы
