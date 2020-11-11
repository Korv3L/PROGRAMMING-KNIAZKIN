void main(){
	int n = 743123;
   	int summ = 0;
   	int n6, n5, n4, n3, n2, n1;
   	int nodn;
   	for (int m = 0; m != n6 + n5 + n4 + n3 + n2 + n1;){
   		for( int digits = 0; digits != nodn;){
   			for (n6 = 0; n6 != n % 10; digits++){
   			n6 = n % 10;
   			}
   			for (n5 = 0; n5 != n / 10 % 10; digits++){
   			n5 = n / 10 % 10;
   			
   			}
   			for (n4 = 0; n4 != n / 100 % 10; digits++){
   			n4 = n / 100 % 10;
   			
   			}
   			for (n3 = 0; n3 != n / 1000 % 10; digits++){
   			n3 = n / 1000 % 10;

   			}
   			for (n2 = 0; n2 != n / 10000 % 10; digits++){
   			n2 = n / 10000 % 10;

   			}
   			for (n1 = 0; n1 != n / 100000; digits++){
   			n1 = n / 100000;

   			}
   		nodn = digits;
   		}
   	m = n6 + n5 + n4 + n3 + n2 + n1;
   	summ = m;
   	}
   	
}
