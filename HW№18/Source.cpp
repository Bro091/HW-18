#include <iostream>
#include<ctime>
#include<cstdlib>



int sum(int num1, int num2 = 8, int num3 = 44, int num4 = 58, int num5 = 8) {
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum;
}

inline double mean(int num1, int num2, int num3) {
	double mean = (double)(num1 + num2 + num3) / 3;
	return mean;
}

int max(int num1, int num2, int num3) {
	std::cout << " INT\n ";
	int max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

double max(double num1, double num2, double num3) {
	std::cout << " DOUBLE\n ";
	double max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

short max(short num1, short num2, short num3) {
	std::cout << " short\n ";
	short max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	return max;
}

template <typename T>
T el_arr(T arr1[], const int length) {
	int n;
	for (int i = 0; i < length; i++) {
		int counter = 0;
		n = arr1[i];
		for (int j = 1; j <= n; j++)
			if (n % j == 0)
				counter++;
		if (counter == 2)
			return n;
	}

}

int main() {
	setlocale(LC_ALL, "Ru");


	//Задача 1.
	int n;
	std::cout << "Задача 1.\nВведите число -> ";
	std::cin >> n;

	std::cout << "Сумма всех чисел = " << sum(n) << "\n\n";

	//Задача 2. 
	std::cout << "Задача 2. \nВведите три числа ->  ";
	int m, k, l;
	std::cin >> m >> k >> l;
	std::cout << " Среднееарифметическое всех чисел равна - " << mean(m, k, l) << "\n\n";

	// Задача 3
	std::cout << " Задача 3 \n";
	std::cout << max(420, 210, 30) << '\n';
	std::cout << max(1.2, 4.2, 8.7) << '\n';
	std::cout << max((short)-280, (short)-12, (short)-3) << '\n';
	std::cout << '\n';

	// Задача 4
	std::cout << " Задача 4 \n Исходный массив: \n";
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
	std::cout << " Первое простое число в массиве - > " << el_arr(arr, size) << '\n';


	return 0;
}




