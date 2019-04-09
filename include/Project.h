#pragma once

class Project
{
public:
	virtual ~ Project() {}
	virtual int getProjectBonus() const = 0;
};
