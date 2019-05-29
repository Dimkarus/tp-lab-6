#pragma once
#include"Personal.h"

class Driver: public Personal
{
public:
	Driver(std::string& Name, int Hour, int Money);
	virtual ~Driver();
	void print();
};