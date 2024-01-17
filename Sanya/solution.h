#pragma once
#include <string>

void task1(double);
void task2(double);
void task3(int, int);
void task5(int, double);
void task6(int);
void task8(int[], int);
void task10(double);
struct OfficePackage
{
	std::string name;
	std::string manufacturer;
	int partsNumber;
	double price;
};
namespace solution
{
	OfficePackage office{ "Office", "Microsoft", 4, 870 };
	OfficePackage smartSute{ "SmartSute", "Lotus", 5, 1020 };
	OfficePackage starOffice{ "StarOffice", "Sun", 4, 9 };
}