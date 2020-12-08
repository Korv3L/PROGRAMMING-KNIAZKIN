#include <stdlib.h>
#include <time.h>
char reword(char *a);

int main(){
char word[] = "Ivanov";
reword(word);
return 0;
}

char reword(char *a){
char temp;
temp = a[0];
a[0] = a[3];
a[3] = temp;
char temp1;
temp1 = a[1];
a[1] = a[4];
a[4] = temp1;
char temp2;
temp2 = a[2];
a[2] = a[5];
a[5] = temp2;
return *a;
}
