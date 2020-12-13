#include <stdlib.h>	//* підключаємо бібліотеки stdlib.h та time.h
#include <time.h>
int get_count_prev( int b, int c);	//* додаємо функції get_count_prev та get_count_next
int get_count_next( int b, int c);

int main() {	//* створимо функцію main()
srand(time(0));	//*  завдяки time.h, використовуємо цей прийом, який при різних запусків rand() буде встановлювати різні значення
int values[4][4] = { -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7};	//* створений власноруч массив
int number = values[0 +  rand() % 3][0 +  rand() % 3];	//* змінна елемента масиву
int num_max = values[3][3];	//* максимальний елемент масиву
int res_prev_count = get_count_prev(num_max, number);	//* змінні результатів кількості попередніх та наступних чисел
int res_next_count = get_count_next(num_max, number);
return 0;
}
int get_count_prev(int b, int c){	//* функція для обчислення кількості попередніх чисел
	int count_min = b - (c - 1);	//* обчислення кількості елементів, що більше попереднього елементу
	return count_min;	//* повертаємо значення count_min
}
int get_count_next( int b, int c){	//* функція для обчислення кількості наступних чисел
	int count_max = b - (c + 1);	//* обчислення кількості елементів, що більше наступого елементу
	return count_max;	//* повертаємо значення count_max
}
