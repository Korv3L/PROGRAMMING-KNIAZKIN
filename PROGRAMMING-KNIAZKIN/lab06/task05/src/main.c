int main(){
int N[] = {15, 71, 23, 4, 5786, 35, 25958, 12, 9};
int bigger;
int C[9] = {};
	for (int i = 0; i < 9; i++){
	C[i] = (N[i] / 10000 % 10) + (N[i] / 1000 % 10) + (N[i] / 100 % 10) + (N[i] / 10 % 10) + (N[i] % 10);
	}
	for(int i = 0; i < 9; i++){
	if(C[i] >= C[0]){
		if(C[i] >= C[1]){
			if(C[i] >= C[2]){
				if(C[i] >= C[3]){
					if(C[i] >= C[4]){
						if(C[i] >= C[5]){
							if(C[i] >= C[6]){
								if(C[i] >= C[7]){
									if(C[i] >= C[8]){
									bigger = C[i];
									}
								}
							}
						}
					}
				}
			}
		}
	}else{
	continue;
	}
	}
	return 0;
}
