#include"Employee.h"

unsigned int Employee::_Counter = 0U;
unsigned int Employee::getCounter()
{
	return Employee::_Counter;
}

Employee::Employee(const std::string& FIO) :_ID(Employee::_Counter++), _FIO(FIO) {}
Employee::~Employee() {}

unsigned int Employee::getID()const
{
	return this->_ID;
}
std::string Employee::getFIO() const
{
	return this->_FIO;
}
void Employee::setPayment(int value)
{
	this->_Payment = value;
}
int Employee::getPayment() const
{	
	return this->_Payment;
}
void Employee::print() const
{
	std::cout << this->_ID << ": " << this->_FIO << std::endl;
	std::cout << "             iNFO :" << std::endl;
	std::cout << "				Salary             = " << this->getPayment() << std::endl;

}
