void main(){
	int n = 123456;
	int summ = 0;
	int nodn;
	int n1 , n2 , n3 , n4 , n5, n6;
	int digits = 0;
	do{
		do{	
			do{
			n1 = n / 100000;
			digits++;
			}while ( n1 != n / 100000);
			do{
			n2 = n / 10000 % 10;
			digits++;
			}while ( n2 != n / 10000 % 10);
			do{
			n3 = n / 1000 % 10;
			digits++;
			}while ( n3 != n / 1000 % 10);
			do{
			n4 = n / 100 % 10;
			digits++;
			}while ( n4 != n / 100 % 10);
			do{
			n5 = n / 10 % 10;
			digits++;
			}while ( n5 != n / 10 % 10);
			do{
			n6 = n % 10;
			digits++;
			}while ( n6 != n % 10);
			
		nodn = digits;
		}while ( nodn != digits);
	summ = n1 + n2 + n3 + n4 + n5 + n6;
	}while ( summ != n1 + n2 + n3 + n4 + n5 + n6);
}
