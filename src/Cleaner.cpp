#include"Cleaner.h"

Cleaner::Cleaner(std::string& Name, int Hour, int Money):Personal(Name, Hour, Money) {}
Cleaner::~Cleaner(){}

void Cleaner::print() const
{
	Personal::print();
	std::cout << std::endl;
}