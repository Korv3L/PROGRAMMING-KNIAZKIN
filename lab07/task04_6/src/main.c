#include <stdlib.h>
#include <time.h>
char reword(char *a);

int main(){
char word[] = "Ivanov";
reword(word);
return 0;
}

char reword(char *a){
int len = 0;	//* довжина слова
for(int i = 0; a[i] != '\0';i++){
	if(a[i] != '\0'){
	len++;
	}
}
int n = len / 2;	//* різниця між літерами даного слова для їх перестановок, яка дорівнює половині len
for(int i = 0; i != n; i++){
	int temp = a[i];
	a[i] = a[i + n];
	a[i + n] = temp;
	
	}
return *a;
}
