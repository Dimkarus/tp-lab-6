#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<vector>

class Employee
{
public:
	static unsigned int getCounter();
	Employee(const std::string& FIO);
	virtual ~Employee();
	unsigned int getID() const;
	std::string getFIO() const;
	void setPayment(int value);
	int getPayment() const;
	virtual void print() const;
public:
	static unsigned int _Counter;
	int _ID;
	std::string _FIO;
	int _Payment;
};
