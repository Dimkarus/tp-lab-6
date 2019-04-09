#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<math.h>
#include"Employee.h"
#include"Personal.h"
#include"Cleaner.h"
#include"Driver.h"
#include"TeamLider.h"
#include"Tester.h"
#include"ProjectManager.h"
#include"Programmer.h"
#include"SinorManager.h"


int choiceProject(int value)
{
	std::vector<int> Project;
	Project.push_back(70000); //0
	Project.push_back(60000); //1
	Project.push_back(80000); //2
	Project.push_back(88000); //3
	Project.push_back(91000); //4
	
	return Project[value];
}

int main()
{
	FILE* input = fopen("Cleaner.txt", "r");
	std::vector<Cleaner*> cleaners;
	int rate = 100;
	while (feof(input) == false)
	{
		char* temp_firstName = new char[30];
		char* temp_lastName = new char[30];
		std::string temp_Name;
		int* Count_Hour = new int[1] ;

		fscanf(input, "%s %s %d/n", temp_firstName, temp_lastName, Count_Hour);
		temp_Name = temp_lastName + std::string(" ") + temp_firstName;
		cleaners.push_back(new Cleaner(temp_Name, *Count_Hour, rate));

		delete[] temp_firstName;
		delete[] temp_lastName;
		delete[] Count_Hour;
	}
	fclose(input);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every Cleaners" << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < cleaners.size(); ++i)

	{
		std::cout << i + 1 << " ||  ";
		cleaners[i]->print();
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////
	std::vector<Driver*> drivers;
	FILE* input2 = fopen("Driver.txt", "r");
	rate = 120;
	while (feof(input2) == false)
	{
		char* temp_FirstName = new char[30];
		char* temp_LastName = new char[30];
		std::string temp_Name;
		int* Count_Hour = new int[1];

		fscanf(input2, "%s %s %d/n", temp_FirstName, temp_LastName, Count_Hour);
		temp_Name = temp_LastName + std::string(" ") + temp_FirstName;
		drivers.push_back(new Driver(temp_Name, *Count_Hour, rate));

		delete[] temp_FirstName;
		delete[] temp_LastName;
		delete[] Count_Hour;
	}
	fclose(input2);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every Drivers" << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < drivers.size(); ++i)
	{
		std::cout << i + 1 << " ||  ";
		drivers[i]->print();
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////

	FILE* input3 = fopen("Tester.txt", "r");
	rate = 250;
	std::vector<Tester*> testers;
	Tester::setPercent(10);

	while (feof(input3) == false)
	{
		char* temp_firstName = new char[30];
		char* temp_lastName = new char[30];
		int* Cout_Hour = new int[1];
		int* NumberProject = new int[1];
		std::string Name;

		fscanf(input3, "%s %s %d %d/n", temp_firstName, temp_lastName, Cout_Hour, NumberProject);
		Name = temp_lastName + std::string(" ") + temp_firstName;
		testers.push_back(new Tester(Name, *Cout_Hour, rate, choiceProject(*NumberProject), *NumberProject));
		

		delete[] temp_firstName;
		delete[] temp_lastName;
		delete[] Cout_Hour;
		delete[] NumberProject;

	}
	fclose(input3);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every Testers" << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < testers.size(); ++i)
	{
		std::cout << i + 1 << " ||  ";
		testers[i]->print();
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////

	FILE* input4 = fopen("Programmer.txt", "r");
	rate = 300;
	std::vector<Programmer*> programmers;
	Programmer::setPercent(6);

	while (feof(input4) == false)
	{
		char* temp_firstName = new char[30];
		char* temp_lastName	 = new char[30];
		int* Cout_Hour		 = new int[1];
		int* NumberProject   = new int[1];
		std::string Name;

		fscanf(input4, "%s %s %d %d/n", temp_firstName, temp_lastName, Cout_Hour, NumberProject);
		Name = temp_lastName + std::string(" ") + temp_firstName;
		programmers.push_back(new Programmer(Name, *Cout_Hour, rate, choiceProject(*NumberProject), *NumberProject));


		delete[] temp_firstName;
		delete[] temp_lastName;
		delete[] Cout_Hour;
		delete[] NumberProject;

	}
	fclose(input4);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every Programmers" << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < programmers.size(); ++i)
	{
		std::cout << i + 1 << " ||  ";
		programmers[i]->print();
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////

	FILE* input5 = fopen("TeamLeader.txt", "r");
	rate = 350;
	std::vector<TeamLider*> teamLeader;
	TeamLider::setPercent(3);

	while (feof(input5) == false)
	{
		char* temp_firstName = new char[30];
		char* temp_lastName = new char[30];
		int* Cout_Hour = new int[1];
		int* NumberProject = new int[1];
		int* CountWorker = new int[1];
		std::string Name;

		fscanf(input5, "%s %s %d %d %d\n", temp_firstName, temp_lastName, Cout_Hour, NumberProject, CountWorker);
		Name = temp_lastName + std::string(" ") + temp_firstName;
		teamLeader.push_back(new TeamLider(Name, *Cout_Hour, rate, choiceProject(*NumberProject), *NumberProject, *CountWorker));

		delete[] temp_firstName;
		delete[] temp_lastName;
		delete[] Cout_Hour;
		delete[] NumberProject;
		delete[] CountWorker;

	}
	fclose(input5);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every TeamLeader" << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < teamLeader.size(); ++i)
	{
		std::cout << i + 1 << " ||  ";
		teamLeader[i]->print();
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////

	FILE* input6 = fopen("ProjectManager.txt", "r");
	std::vector<ProjectManager*> prManager;
	ProjectManager::setPercent(3);

	while (feof(input5) == false)
	{
		char* temp_firstName = new char[30];
		char* temp_lastName = new char[30];
		int* NumberProject = new int[1];
		std::string Name;

		fscanf(input6, "%s %s %d\n", temp_firstName, temp_lastName, NumberProject);
		Name = temp_lastName + std::string(" ") + temp_firstName;
		prManager.push_back(new ProjectManager(Name, choiceProject(*NumberProject), *NumberProject) );

		delete[] temp_firstName;
		delete[] temp_lastName;
		delete[] NumberProject;

	}
	fclose(input6);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every ProjectManager " << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < prManager.size(); ++i)
	{
		std::cout << i + 1 << " ||  ";
		prManager[i]->print();
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////////////////////////////////////////

	FILE* input7 = fopen("SeniorManager.txt", "r");
	std::vector<SinorManager*> srManager;
	SinorManager::setPercent(3);
	 unsigned int sum = 0;
	while (feof(input7) == false)
	{
		char* temp_firstName = new char[30];
		char* temp_lastName = new char[30];
		int* Count_Project = new int[1];
		std::string Name;

		fscanf(input6, "%s %s %d\n", temp_firstName, temp_lastName, Count_Project);
		Name = temp_lastName + std::string(" ") + temp_firstName;

		for (int i = 0; i < *Count_Project; i++)
		{
			sum += choiceProject(i);
		}
		srManager.push_back(new SinorManager(Name, sum, *Count_Project));

		delete[] temp_firstName;
		delete[] Count_Project;
		delete[] temp_lastName;

	}
	fclose(input6);

	std::cout << "====================================================================" << std::endl;
	std::cout << "Data about every SinorManager " << std::endl;
	std::cout << "====================================================================" << std::endl;
	for (auto i = 0; i < srManager.size(); ++i)
	{
		std::cout << i + 1 << " ||  ";
		srManager[i]->print();
	}
	std::cout << std::endl;


	system("pause");
	return 0;

}