#pragma once
#include <iostream>
class Project {
protected:
	std::string project;
	int summa;
public:
	Project() {}

	virtual void project_payment(int summa, double contribution) = 0;
	~Project() {}
};