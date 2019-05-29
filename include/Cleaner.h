 #pragma once
#include"Personal.h"

class Cleaner: public Personal
{
public:
	Cleaner(std::string& Name, int Hour, int Money);
	virtual ~Cleaner();
	void print() const;
};