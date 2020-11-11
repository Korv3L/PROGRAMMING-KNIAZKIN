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
}

