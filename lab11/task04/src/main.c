/**
 * @Author: valadon
 * @Date:   2020-12-21T00:24:53+02:00
 * @Last modified by:   valadon
 * @Last modified time: 2020-12-21T02:21:38+02:00
 */



#include "lib.h"	//* підключення нашого головного файлу lib.h

int main(){	//* створюємо функцію main
	int *massive = (int*)malloc((N * N) * sizeof(int));	//* створюємо динамічний двомірний масив

	fillMass(massive);	//* заповнення масиву функцією fillMass

	int *mainDiag = (int*)malloc(N * sizeof(int));	//* створюємо динамічний одномірний масив(головна діагональ двомірного масиву)

	fillGenDiag(massive, mainDiag);	//* заповнення одномірного масиву функцією fillGenDiag

	ReplaceMass(mainDiag);	//* сортування за зростанням елементів одномірного масиву фунцкією sortMass

	free(massive);
	return 0;	//* повертаємо нульове значення
}	//* кінець функції main
