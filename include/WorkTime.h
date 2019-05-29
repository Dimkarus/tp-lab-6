#pragma once

class WorkTime
{
public:
	virtual ~WorkTime() {}
	virtual int getPayment() const = 0;
};