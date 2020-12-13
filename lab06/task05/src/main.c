int main(){
int bigger = 1;
int N[] = {15, 71, 23, 4, 5786, 35, 25958, 12, 9};
	for (int i = 0; i != 10;){
		int summ = (N[i] / 10000 % 10) + (N[i] / 1000 % 10) + (N[i] / 100 % 10) + (N[i] / 10 % 10) + (N[i] % 10);
			if(summ > bigger){
				bigger = N[i];
				i++;
			}
	}
	return 0;
}
