#pragma once
#include <iostream>

class Headling {
protected:
	int num;			//number of people
	int price;			//price for 1 people
	int bonus;
public:
	virtual void payment_head(int n, int price) {
		this->bonus = n * price;
	}
};