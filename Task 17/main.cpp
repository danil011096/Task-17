#include <iostream>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}
int mean_arr(int arr[], const int lenght) {
	int sum = 0;
	int b;
	for (int i = 0; i < lenght; i++)
		sum += arr[i];
	b = sum / lenght;
	return b;
}
void powers(int num1, int num2) {
	for (int i = 0; i <= num2; i++) 
	{
		int q = 1;
		for (int j = 0; j < i; j++) 
		{
			q *= num1;
		}
		std::cout << num1 << " ^ " << i << " = " << q << std::endl;
	}
}
void positive_arr(int arr[], const int lenght) {
	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] < 0)
			std::cout << -arr[i] << " ";
		else
			std::cout << arr[i] << " ";
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int m;

	//Задание 1.

	std::cout << "Задание 1.\nВведи первое число -> ";
	std::cin >> n;
	std::cout << "Введи второе число -> ";
	std::cin >> m;
	std::cout << "Среднее чисел " << n << " и " << m << " = " << mean(n, m) << std::endl;

	// Задание 2.
	std::cout << "\nЗадание 2.\n";
	int const size = 5;
	int arr[size]{1, 3, 5, 7, 9};
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\nСреднее значение всех элементов массива = " << mean_arr(arr, size) << ".\n";

	// Задание 3.
	std::cout << "\nЗадание 3.\nВведи первое число -> ";
	int b;
	std::cin >> b;
	std::cout << "Введи второе число -> ";
	int v;
	std::cin >> v;
	powers(b, v);

	// Задание 4.
	std::cout << "\nЗадание 4.\n";
	int const size1 = 5;
	int arr1[size1]{1, -3, 6, 20, -7};
	for (int i = 0; i < size; i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;
	positive_arr(arr1, size1);
	




	return 0;
}