#pragma once
#include"ProjectManager.h"

class SinorManager : public ProjectManager
{
public:	SinorManager(std::string Name, int MoneyofProject, int NumberProject);
		virtual ~SinorManager();
		void print() const;
		static void setPercent(int p);
		static int getPercent();
private:
	static int percent;
};