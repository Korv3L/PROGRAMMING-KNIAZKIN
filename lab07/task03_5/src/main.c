#include <stdlib.h>
#include <time.h>
int get_res_for(int N, int A, int PERC);
int get_res_while(int N, int A, int PERC);
int get_res_do(int N, int A, int PERC);

int main(){
	int N = 1 + rand() % 10;
	int A = 500 + rand() % 50000;
	int PERC = 0 + rand() % 100;
	
	int result_for = get_res_for( N , A , PERC);
	int result_while = get_res_while( N , A , PERC);
	int result_do = get_res_do( N , A , PERC);
	
	return 0;
	}
	
int get_res_for(int N, int A, int PERC){
	float summary_out;	//* создаем переменную 
	double count;	//* создаем перменную счёта
	float at_perc_per_annum = 7 / ( float )PERC;	// создаем переменную процентной ставки
	
	//* ЦИКЛ FOR
	
	for ( int i = 0; i != N; i++ ){	//* создаем цикл для счета 
		count = count +  A * (double)at_perc_per_annum; 
	}
	summary_out = (double)A + count;
	return summary_out;
}
int get_res_while(int N, int A, int PERC){
float summary_out_w;
	int i_w = 0;
	double count_w;
	float at_perc_per_annum_w = 7 / ( float )PERC;
	while ( i_w != N ){
		count_w = count_w +  A * (double)at_perc_per_annum_w; 
		i_w++;
	}
	summary_out_w = (double)A + count_w;
	return summary_out_w;
}
int get_res_do(int N, int A, int PERC){
float summary_out_d;
	int i_d = 0;
	double count_d;
	float at_perc_per_annum_d = 7 / ( float )PERC;
	do{
	
		count_d = count_d +  A * (double)at_perc_per_annum_d; 
		i_d++;
	}while ( i_d != N );
	summary_out_d = (double)A + count_d;
	return summary_out_d;
}
