void main (){	//* создаем void функцию
	int N = 5;	//* создаем переменную количества лет
	int A = 10000;	//* создаем переменную вложения
	int PERC = 100;	//* создаем переменную процента
	float summary_out;	//* создаем переменную 
	double count;	//* создаем перменную счёта
	float at_perc_per_annum = 7 / ( float )PERC;	// создаем переменную процентной ставки
	
	//* ЦИКЛ FOR
	
	for ( int i = 0; i != N; i++ ){	//* создаем цикл для счета 
		count = count +  A * (double)at_perc_per_annum; 
	}
	summary_out = (double)A + count;
	
	//* WHILE
	
	float summary_out_w;
	int i_w = 0;
	double count_w;
	float at_perc_per_annum_w = 7 / ( float )PERC;
	while ( i_w != N ){
		count_w = count_w +  A * (double)at_perc_per_annum_w; 
		i_w++;
	}
	summary_out_w = (double)A + count_w;
	
	//* DO_WHILE
	
	float summary_out_d;
	int i_d = 0;
	double count_d;
	float at_perc_per_annum_d = 7 / ( float )PERC;
	do{
	
		count_d = count_d +  A * (double)at_perc_per_annum_d; 
		i_d++;
	}while ( i_d != N );
	summary_out_d = (double)A + count_d;
}

