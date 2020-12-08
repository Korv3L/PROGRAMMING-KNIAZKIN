#include <stdlib.h>
#include <time.h>
int get_fact_for(int N);
int get_fact_while(int N);
int get_fact_do(int N);

int main(){
	int N = 1 + rand() % 20;
	
	int result_for = get_fact_for(N);
	int result_while = get_fact_while(N);
	int result_do = get_fact_do(N);
	
	return 0;
	}
	
int get_fact_for(int N){
int fact_f;	//* создаем переменную двойного факториала для цикла for
fact_f = N;	//* Сравниваем двойной факториал с глобальным числом
for (int numb = N; numb >= 2;){	//* создаем цикл for
	numb = numb-2;	//* формула для расчета цифр из числа для двойного факториала
	if ( numb <= 0){	//* условие если цифра будет меньше или равна нулю
	break;	//* прерываем функцию
	}	//* конец условия
	fact_f = fact_f * numb;	//* формула двойного факториала
	return fact_f;	
	}
}
int get_fact_while(int N){
int numb_W;	//* создаем переменную цифр числа для цикла while
int fact_W;	//* создаем переменную двойного факториала для цикла while
fact_W = N;	//* Сравниваем двойной факториал с глобальным числом
numb_W = N;	//* Сравниваем цифры числа с глобальным числом
while(numb_W >= 2){	//* создаем цикл while
	numb_W = numb_W-2;	//*формула для расчета цифр из числа для двойного факториала
	if ( numb_W <= 0){	//* условие если цифра будет меньше или равна нулю
	break;	//* прерываем функцию
	}	//* конец условия
	fact_W = fact_W * numb_W;	//* формула двойного факториала
	return fact_W;
}	//* конец цикла while
}
int get_fact_do(int N){
int numb_D;	//* do_while
int fact_D;	//* do_while
fact_D = N;	//* Сравниваем двойной факториал с глобальным числом
numb_D = N;	//* Сравниваем цифры числа с глобальным числом
do{	//* do_while
	numb_D = numb_D-2;	//* формула для расчета цифр из числа для двойного факториала
	if ( numb_D <= 0){	//* условие если цифра будет меньше или равна нулю
	break;	//* прерываем функцию
	}	//* конец условия
	fact_D = fact_D * numb_D;	//* формула двойного факториала
	}while(numb_D >= 2);	//* конец цикла do_while
	return fact_D;
}
