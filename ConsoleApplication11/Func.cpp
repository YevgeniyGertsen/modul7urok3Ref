#include <iostream>
using namespace std;
/*
Написать рекурсивную функцию для нахождения:
a.	n-го члена прогрессии
b.	суммы n первых членов прогрессии

*/
int rFunc(int count, int z, int fn)
{
	if (count <= 1 )
		return fn;

	fn += z;//fn = fn+3
	count--; 

	cout << count<< ". fn=" << fn << endl;

	fn = rFunc(count, z, fn);
	return fn;
}

//b.	суммы n первых членов прогрессии
int rFuncSum(int count, int z, int fn, int sum)
{
	sum += fn;

	if (count <= 1)
		return sum;

	count--;
	fn += z;
	cout << count << ". fn=" << fn << endl;
	
	sum = rFuncSum(count, z, fn, sum);

	return sum;
}

/*
14.	В некоторых языках программирования 
(например, в Паскале) не предусмотрена операция возведения в степень. 
Написать рекурсивную функцию для расчета степени n 
вещественного числа a (n — натуральное число).
*/
int myPow(int n, int number, int * rNumber)
{
	if (n <= 1)
		return number;
	
	number *= *rNumber;
	n--;	

	//cout << n << ". " << number << endl;
	number = myPow(n, number, rNumber);

	return number;
}

void Arr(int (*p)[2])//указывает на массив из 2-хзначений типа int
{
	int (*pz)[2];
	pz = p;

	printf("pz %p, pz+1 = %p \n", pz, pz+1);

	printf("pz %d \n", *(*pz + 5));


	//printf(" *pz[0]=%d, *pz[0]=%d  \n",
	//	*pz[0], *pz[0]);

	//*pz++;
	//printf(" *pz[0]=%d, *pz[5]=%d  \n",
	//	*pz[0], *pz[0]);

	//printf()

	printf("\n\n\n");
}

void fillArr(int(*p)[4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//p[i][j] = 1 + rand() % 10;
			*(*p+j) = 1 + rand() % 10;
		}
		p++;
	}
}

void printArr(int(*p)[4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//cout << p[i][j]<<"\t";
			//cout << *(*p + j) << "\t";
			printf("%d \t", *(*p + j));
		}
		p++;
		cout << endl;
	}
}