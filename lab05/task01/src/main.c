#define N 298475	//* вводим наше число
int main(){	//* создаем функцию
	//* FOR	
   	int summ_f;	//* создаем переменную суммы
   	int nodn_f;	//* создадим переменную разрядов
   		for (int m = 0; summ_f >= 0;){	//* создаем цикл for для подсчета суммы
   			int n6 = N % 10;	//* расчет последней цифры числа
   			nodn_f++;
   			m = m + n6;
   			int n5 = N / 10 % 10;	//* расчет пятой цифры числа	
   			nodn_f++;
   			m = m + n5;
   			int n4 = N / 100 % 10;	//* расчет  четвертой числа
   			nodn_f++;
   			m = m + n4;
   			int n3 = N / 1000 % 10;	//* расчет третьей цифры числа
  			nodn_f++;
   			m = m + n3;
   			int n2 = N / 10000 % 10;	//* расчет второй цифры числа
   			nodn_f++;
   			m = m + n2;
   			int n1 = N / 100000;	//* расчет первой цифры числа
   			nodn_f++;
   			m = m + n1;
   			if (m = n6 + n5 + n4 + n3 + n2 + n1){
   				summ_f = m;
   				break;
   			}else{
   				continue;
   			}   			
   		}	//* конец функции for
   	
   	
   	//* WHILE_DO
   	
	int summ_w = 0;	//* создаем переменную суммы
	int nodn_w;	//* создадим переменную разрядов
	while ( summ_w >= 0){	//*создаем цикл while для расчета суммы 
		int m1;
		int n1_w = N / 100000;
		nodn_w++;
		m1 = m1 + n1_w;
		int n2_w = N / 10000 % 10;
		nodn_w++;
		m1 = m1 + n2_w;
		int n3_w = N / 1000 % 10;
		nodn_w++;
		m1 = m1 + n3_w;
		int n4_w = N / 100 % 10;
		nodn_w++;
		m1 = m1 + n4_w;
		int n5_w = N / 10 % 10;
		nodn_w++;
		m1 = m1 + n5_w;
		int n6_w = N % 10;
		nodn_w++;
		m1 = m1 + n6_w;
		if( m1 = n6_w + n5_w + n4_w + n3_w + n2_w + n1_w){
			summ_w = m1;
			break;
		}else{
			continue;
		}	
	}	//* конец функции while_do 
	
	//* DO_WHILE
	
	int summ_d;	//* создаем переменную суммы
	int nodn_d = 0;	//* создадим переменную разрядов	
	do{	//* создаем цикл do_while для подсчета суммы
			int m2;
			int n1_d = N / 100000;
			nodn_d++;
			m2 = m2 + n1_d;
			int n2_d = N / 10000 % 10;
			nodn_d++;
			m2 = m2 + n2_d;
			int n3_d = N / 1000 % 10;
			nodn_d++;
			m2 = m2 + n3_d;
			int n4_d = N / 100 % 10;
			nodn_d++;
			m2 = m2 + n4_d;
			int n5_d = N / 10 % 10;
			nodn_d++;
			m2 = m2 + n5_d;
			int n6_d = N % 10;
			nodn_d++;
			m2 = m2 + n6_d;
			if ( m2 = n6_d + n5_d + n4_d + n3_d + n2_d + n1_d){
				summ_d = m2;
				break;
			}else{
				continue;
			}
	}while ( summ_d >= 0);	//* конец функции do_while	
return 0;	
}	//* конец функции программы
