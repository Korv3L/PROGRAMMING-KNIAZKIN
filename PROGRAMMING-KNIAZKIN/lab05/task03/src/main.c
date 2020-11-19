void main (){
	int N = 5;
	int A = 10000;
	int PERC = 100;
	float summary_out;
	double count;
	float at_perc_per_annum = 7 / ( float )PERC;
	for ( int i = 0; i != N; i++ ){
		count = count +  A * (double)at_perc_per_annum; 
	}
	summary_out = (double)A + count;
	
	
	
	float summary_out_w;
	int i_w = 0;
	double count_w;
	float at_perc_per_annum_w = 7 / ( float )PERC;
	while ( i_w != N ){
		count_w = count_w +  A * (double)at_perc_per_annum_w; 
		i_w++;
	}
	summary_out_w = (double)A + count_w;
	
	
	
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

