#include"Driver.h"

Driver::Driver(std::string& Name, int Hour, int Money ): Personal(Name, Hour, Money){}
Driver::~Driver() {}
void Driver::print()
{
	Personal::print();
	std::cout << std::endl;
}