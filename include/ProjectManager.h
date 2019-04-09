#pragma once
#include"Manager.h"
#include"Heading.h"

class ProjectManager: public Manager, public Heading
{
public:
	ProjectManager(std::string Name, int MoneyofProject, int NumberProject);
	virtual ~ProjectManager();
	void print() const;
	static void setPercent(int p);
	static int getPercent();
	int getMoneyProject();
	virtual int getSalary() const override;
private:
	static int percent;
	int _Money_Project;
	int _Number_Project;
};