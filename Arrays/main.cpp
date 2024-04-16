#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "среднее-ариметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	cout << "количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	//cout << " количество сдвигов:"; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "сумма эленментов массива: " << Sum(brr, SIZE) << endl;
	cout << "среднее-ариметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	int number_of_shifts1;
	cout << "количество сдвигов: "; cin >> number_of_shifts1;
	shiftLeft(brr, SIZE, number_of_shifts1);
	Print(brr, SIZE);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
    }
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)

{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)

{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double brr[], const int SIZE, int number_of_shifts1)
{
	for (int i = 0; i < number_of_shifts1; i++)
	{
		int buffer = brr[0];
		for (int i = 1; i < SIZE; i++)
		{
			brr[i - 1] = brr[i];
		}
		brr[SIZE - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n,n - number_of_shifts);
}
