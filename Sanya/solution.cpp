#include <math.h>
#include <string>
#include <iostream>

void task1(double x)
{
	std::cout << ((14 - 19 * x) / (18 * x * x)) + ((3 * x - 2) / (9 * x - 4));
}

void task2(double a)
{
	std::cout << sqrt((1 - cos(a)) / (1 + cos(a))) + sqrt((1 + cos(a)) / (1 - cos(a)));
}

void task3(int a, int b)
{
	if (a > b)
	{
		std::cout << (2 * a) / (b + 1);
	}
	else if (a == b)
	{
		std::cout << -445;
	}
	else
	{
		std::cout << (b + 5) / a;
	}
}

void task5(int number, double length)
{
	switch (number)
	{
		case 1:
			std::cout << length * 0.1;
		case 2:
			std::cout << length * 1000;
		case 3:
			std::cout << length;
		case 4:
			std::cout << length * 0.001;
		case 5:
			std::cout << length * 0.01;
	}
}

void task6(int value)
{
	const char *charArray = std::to_string(value).c_str();
	int stringLength = std::to_string(value).length();
	std::string result;
	for (int i = 0; i < stringLength; i++)
	{
		result += charArray[i];
	}
	std::cout << result;
}

void task8(int arr[], int size)
{
	int *newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = abs(arr[i]);
	}
	std::cout << std::max_element(*newArray, *(newArray + (size - 1)));
}

void task10(double radius)
{
	std::cout << 3.14 * radius * radius;
}