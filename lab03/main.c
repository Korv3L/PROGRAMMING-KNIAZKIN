#define DOLLAR 28.26	//* Записываем глобальную перменную равную курсу доллара по курсу НБУ на данный момент
#define EURO 33.41	//* Записываем глобальную перменную равную курсу евро по курсу НБУ на данный момент
#define RUBLE 0.36	//* Записываем глобальную перменную равную курсу рубля по курсу НБУ на данный момент
int main () {	//* Создаем функцию main ()
	float hryvna = 250; 	//* Создаем локальную переменную hryvna типа float равную любому числу, которое мы внесём
	float num1 = 0;	//* Создаем локальную переменную num1 типа float равную нулю для дальнейшего использования в формуле для вычисления перевода нашей валюты в доллары по курсу НБУ на данный момент
	float num2 = 0;	//* Создаем локальную переменную num2 типа float равную нулю для дальнейшего использования в формуле для вычисления перевода нашей валюты в евро по курсу НБУ на данный момент
	float num3 = 0;	//* Создаем локальную переменную num3 типа float равную нулю для дальнейшего использования в формуле для вычисления перевода нашей валюты в рубли по курсу НБУ на данный момент
	num1 = hryvna / DOLLAR;	//* Формула для подсчёта перевода гривен в доллары, где локал.перменная num1 приобретает значение равное частному из локал. переменной hryvna деленному на глоб. переменную DOLLAR 
	num2 = hryvna / EURO;	//* Формула для подсчёта перевода гривен в доллары, где локал.перменная num2 приобретает значение равное частному из локал. переменной hryvna деленному на глоб. переменную EURO  
	num3 = hryvna / RUBLE;	//* Формула для подсчёта перевода гривен в доллары, где локал.перменная num3 приобретает значение равное частному из локал. переменной hryvna деленному на глоб. переменную RUBLE 
	return 0;	//* Заканчиваем текущую функцию main () и возвращаем результат программы
}

