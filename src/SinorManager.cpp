#include"SinorManager.h"

int SinorManager::percent;
SinorManager::SinorManager(std::string Name, int MoneyProject, int NumberProject) : ProjectManager(Name, MoneyProject, NumberProject)
{
	ProjectManager::setPercent(SinorManager::getPercent());
}
SinorManager::~SinorManager(){}
void SinorManager::setPercent(int p)
{
	SinorManager::percent = p;
}
int SinorManager::getPercent()
{
	return SinorManager::percent;
}
void SinorManager::print() const
{
	ProjectManager::print();
}