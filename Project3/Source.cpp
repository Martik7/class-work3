#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <math.h>

void task1()
{
	int time, bac=1;
	printf("¬ведите врем€: ");
	scanf_s("%d", &time);

	for (size_t i = 1; i <= time; i++)
	{
		bac = bac * 2;
		printf("%d\n", bac);
	}

}

void task2()
{
	int N;
	printf("¬ведите число N: ");
	scanf_s("%d", &N);

	for (size_t i = 1; i < N; i++)
	{
		printf("%d\n", i);
	}

}

void task3()
{
	int n, z=1, k=0;
	printf("¬ведите число N= ");
	scanf_s("%d", &n);

	for (size_t i = 1; z < n-k; i++)
	{
		z = z + k;
		k = z - k;
		printf("=%d\n", z);
	}
}

void task4()
{
	int p, mp,result;
	printf("¬ведите простое число: ");
	scanf_s("%d", &p);

	for (size_t i = 0; i < p; i++)
	{
		mp=(pow(2, i + 1) - 1);
		printf("%d\n", mp);
	}
}

void task5()
{
	int i=1;
	int n1 = i;
	int n2 = n1 + 1;
	for (size_t i = 200; i <= 300; i++)
	{
		int n1 = i;
		for (size_t p = 200; p <=300; p++)
		{
			if (n1 != p)
			{
				int n2 = p;
				int del = 0;
				for (size_t j = 1; j < n2; j++)
				{
					if (n2%j == 0)
						del = del + j;
				}

				if (n1 == del)
				{
					printf("%d - friend %d\n", n1, n2);
				}
			}
		}
	}
	
}

void task6()
{
		int a, sum = 0, mod = 0;

		printf("a=");
		scanf_s("%d", &a);
		while (a != 0)
		{
			mod++;
			if (mod == abs(a))
			{
				sum += a;
			}
		}
		printf("summa:", sum);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task = 0;
	int restart = 0;
	do
	{
		printf("¬ведите номер задани€: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		case 5:
		{
			task5();
		}break;
		case 6:
		{
			task6();
		}break;

		default:
			break;
		}

		printf("\n---------------------\n");
		printf("’отите продолжить?1/0\n");
		scanf_s("%d", &restart);

	} while (restart==1);

	system("pause");
}