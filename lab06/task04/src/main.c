int main(){
char word[] = "Ivanov";
int len = 0;	//* довжина слова
for(int i = 0; word[i] != '\0';i++){
	if(word[i] != '\0'){
	len++;
	}
}
int n = len / 2;	//* різниця між літерами даного слова для їх перестановок, яка дорівнює половині len
for(int i = 0; i != n; i++){
	int temp = word[i];
	word[i] = word[i + n];
	word[i + n] = temp;
	
	}
return 0;
}
