#include"ProjectManager.h"
int ProjectManager::percent;
ProjectManager::ProjectManager(std::string Name, int MoneyProject, int NumberProject):Manager(Name),_Money_Project(MoneyProject), _Number_Project(NumberProject)
{
	Manager::setPayment(ProjectManager::getPercent(), this->_Money_Project);
	Employee::setPayment(Manager::getPayment());
	Manager::setWithoutSalary(this->getSalary());
}
ProjectManager::~ProjectManager(){}
void ProjectManager::setPercent(int p)
{
	ProjectManager::percent = p;
}
int ProjectManager::getPercent()
{
	return ProjectManager::percent;
}
int ProjectManager::getMoneyProject()
{
	return this->_Money_Project;
}
int ProjectManager::getSalary() const
{
	return 15000;
}
void ProjectManager::print() const
{ 
	Manager::print();
	std::cout << "				Percent			    = " << ProjectManager::percent << std::endl;
	std::cout << "				Money of Project    = " <<  this->_Money_Project   << std::endl;
	std::cout << "				Number of Project   = " << this->_Number_Project << std::endl;
	std::cout << "              Monthly payment     = " << this->getSalary() << std::endl;
	std::cout << "_____________________________________________________________________" << std:: endl;
}