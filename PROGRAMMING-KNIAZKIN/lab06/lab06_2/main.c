int main(){	//* 	создаем функцию
int a[20];	//*	создаем массив из 20 элементов
int i;	//*	создаем переменную для нумерации элементов
a[0] = 0;	//*	объявляем изначальное значение нулевого элемента массива
a[1] = 1;	//*	объявляем изначальное значение первого элемента массива
for( i = 0; i < 20; i++){	//*	создаем цикл для заполнения массива целыми числами Фиббоначи
	a[i] = a[ i - 1 ] + a[ i - 2];	//*	записываем формулу для вычисления чисел Фиббоначи
}	//*	конец цикла
return 0;	//*	Заканчиваем текущую функцию main () и возвращаем результат программы	
}	//*	конец функции