#include <stdlib.h>
#include <time.h>
int get_fact_for(int a);
int get_fact_while(int a);
int get_fact_do(int a);

int main(){
	srand(time(0));
	int N = 1 + rand() % 20;
	
	int result_for = get_fact_for(N);
	int result_while = get_fact_while(N);
	int result_do = get_fact_do(N);
	
	return 0;
	}
	
int get_fact_for(int a){
int fact_F = 1;	//* создаем переменную двойного факториала для цикла for
for ( int i = a; i >= 1;){	//* создаем цикл for
	fact_F *= i;	//* формула для обчислення подвійного факторіала
	i = i - 2;
	}	//* конец цикла for
	return fact_F;
}
int get_fact_while(int a){
int fact_W = 1;	//* создаем переменную двойного факториала для цикла while
int i = a;
while(i >= 1){	//* создаем цикл while
	fact_W *= i; 	//* формула для обчислення подвійного факторіала
	i = i - 2;
}	//* конец цикла while
return fact_W;
}
int get_fact_do(int a){
int fact_D = 1;
int i = a;
do{	//* do_while
	fact_D *= i;	//* формула для обчислення подвійного факторіала 
	i = i - 2;
	}while(i >= 1);
	return fact_D;
}
