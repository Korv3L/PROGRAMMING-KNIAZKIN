#define DOLLAR 28.26	//* Записываем глобальную перменную равную курсу доллара по курсу НБУ на данный момент
#define EURO 33.41	//* Записываем глобальную перменную равную курсу евро по курсу НБУ на данный момент
#define RUBLE 0.36	//* Записываем глобальную перменную равную курсу рубля по курсу НБУ на данный момент
int main () {	//* Создаем функцию main ()
	float hryvna = 250; 	//* Создаем локальную переменную hryvna типа float равную любому числу, которое мы внесём
	float num1, num2, num3;	//* Создаем локальные переменные num1, num2, num3 типа float равные нулю для дальнейшего использования в формулах для вычисления перевода нашей валюты в доллары, евро, рубли по курсу НБУ на данный момент
	num1 = hryvna / DOLLAR;	//* Формула для подсчёта перевода гривен в доллары, где локал.перменная num1 приобретает значение равное частному из локал. переменной hryvna деленному на глоб. переменную DOLLAR 
	num2 = hryvna / EURO;	//* Формула для подсчёта перевода гривен в доллары, где локал.перменная num2 приобретает значение равное частному из локал. переменной hryvna деленному на глоб. переменную EURO  
	num3 = hryvna / RUBLE;	//* Формула для подсчёта перевода гривен в доллары, где локал.перменная num3 приобретает значение равное частному из локал. переменной hryvna деленному на глоб. переменную RUBLE 
	return 0;	//* Заканчиваем текущую функцию main () и возвращаем результат программы
}
