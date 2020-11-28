int main(){
char word[] ="Ivanov";
char temp = word[0];
word[0] = word[3];
word[3] = temp;
char temp1 = word[1];
word[1] = word[4];
word[4] = temp1;
char temp2 = word[2];
word[2] = word[5];
word[5] = temp2;
return 0;
}
