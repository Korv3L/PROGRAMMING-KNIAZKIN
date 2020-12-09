#include <stdlib.h>	//* підключаємо бібліотеки stdlib.h та time.h
#include <time.h>
int get_count_prev(int b, int c);	//* додаємо функції get_count_prev та get_count_next
int get_count_next(int b, int c);

int main() {	//* створимо функцію main()
srand(time(0));	//*  завдяки time.h, використовуємо цей прийом, який при різних запусків rand() буде встановлювати різні значення
int x = 0 +  rand() % 3;	//* змінні координатів елемента масиву
int y = 0 +  rand() % 3;
int values[4][4] = { -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};	//* створений власноруч массив
int number = values[x][y];	//* змінна елемента масиву
int prev = number - 1;	//* змінні попереднього та наступного чисел вище вказаного елемента масиву
int next = number + 1;
int num_max = values[3][3];	//* максимальний елемент масиву по порядку
int num_min = values[0][0];	//* мінімальний елемент масиву по порядку
int res_prev_count = get_count_prev(prev, num_min);	//* змінні результатів кількості попередніх та наступних чисел
int res_next_count = get_count_next(next, num_max);
}

int get_count_prev(int b, int c){	//* функція для обчислення кількості попередніх чисел
	int a = c - b;	//* формула обчислення вище вказанної операції
	if(a < 0){
	a = -1 * a;
	}else{
	a = a * 1;
	}
	return a;	//* повертаємо значення а
}

int get_count_next(int b, int c){	//* функція для обчислення кількості наступних чисел
	int a = c - b;	//* формула обчислення вище вказанної операції
	if(a < 0){
	a = -1 * a;
	}else{
	a = a * 1;
	}
	return a;	//* повертаємо значення а
}
