#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	/*cout << "Начало рекурсии" << endl;
	int result = rFunc(5, 3, 1);
	cout << "result = "<< result << endl;*/

	//cout << "Начало рекурсии" << endl;
	//int result = rFuncSum(5, 3, 1);
	//cout << "result = " << result << endl;

	/*int number = 2;
	int n = 3;
	int result = myPow(n, number, &number);
	cout << number << " в степени " << n << " = " << result << endl;*/


	int mas[4][2] = { {5,3},{ 22,34 },{ 24,56 },{ 8,33} };

	//for (int i = 0; i < 4; i++)
	//{
	//	for (size_t j = 0; j < 2; j++)
	//	{
	//		cout << mas[i][j]<<" = "<<&mas[i][j] << "\t";
	//	}
	//	cout << endl;
	//}

	//Arr(mas);


	int mas2[10][4];
	fillArr(mas2, 10, 4);

	printArr(mas2, 10, 4);


	//mas = mas[0][0]
	//[int][int]
	//mas - 

	printf("mas %p == &mas[0] = %p \n", mas, &mas[0]);
	printf("mas %p == &mas[0][0] = %p - mas[1][0] = %d \n", mas, &mas[1][0], mas[1][0]);

	//int ** pri = mas; 

	//mas + 1;
	//mas[1][0]
	printf("\n mas[1][1] = %p / mas+3 = %p\n", 
		&mas[1][1], 
		&(*(mas + 2)));

	//pri = &mas[0][0] 1-строка 1 элемент
	//pri +1 = &mas[0][1] - 1тсрока 2 элемент
	//pri +2 = $mas[1][0] -
	//pri+3		[1][1]

	printf("\n\n mas[0] = %d, *(mas) = %d \n\n ", mas[0], *(mas));
	printf("mas[0][0] = %d, **mas+2 = %d \n\n ", mas[0][0], **mas+2);


}