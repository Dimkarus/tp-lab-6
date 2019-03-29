#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/////interfaces//////////

class WorkTime {		//������ ������ ������ �� ������������� �������(���� ���������� �� ������).
public: 
	virtual ~WorkTime() {};
	virtual void salW() = 0;
};

class Project {		//������ ������ ������ �� ������� � �������(������ ������� ������� ��������������� ������������� ������).
public:
	virtual ~Project() {};
	virtual void salP() = 0;
};

class Heading {		//������ ������ ������ �� �����������(���������� �����������).
public:
	virtual ~Heading() {};
	virtual void salH() = 0;
};

class Employee {		//��������.�������� ������������ ����� ��� ���� �������������� ����������.
protected:
	int id;
	string name;		//FIO
	int worktime=0;		//������������ ����� (hours).
	int payment=0;		//���������� �����.
	int numproj=0;		//number of projects
public:
	Employee(int, string);
	int getId();
	string getName();
	int getWorktime();
	int getNumproj();
	virtual int getSal() = 0;
};

class Personal : public Employee, public WorkTime {			//�������� �� ����� � ������� �� ���������� ������������ �����.����� ������ �� ���.
public:
	Personal(int, string, int);
};

class Cleaner : public Personal {			//��������.
public:
	Cleaner(int idS, string nameS, int worktimeS) : Personal(idS, nameS, worktimeS){};
	void salW();
	int getSal();
};

class Driver : public Personal {		//��������.
public:
	Driver(int idS, string nameS, int worktimeS) : Personal(idS, nameS, worktimeS) {};
	void salW();
	int getSal();
};

class Engineer : public Employee, public WorkTime, public Project {		// -�������.����� ������ � ������ �� ��� + ������ �� ������������ �������.
protected:
	int paym1, paym2;
public:
	Engineer(int, string, int, int);
	int getpaym1();
	int getpaym2();
};

class Programmer : public Engineer {		//������� - �����������.
public:
	Programmer(int idS, string nameS, int worktimeS, int numprojS) : Engineer(idS, nameS, worktimeS, numprojS) {};
	void salW();
	void salP();
	int getSal();
};

class Tester : public Engineer {		//������� �� ������������.
public:
	Tester(int idS, string nameS, int worktimeS, int numprojS) : Engineer(idS, nameS, worktimeS, numprojS) {};
	void salW();
	void salP();
	int getSal();
};

class TeamLeader : public Programmer, public Heading {		//������� �����������.
public:
	TeamLeader(int idS, string nameS, int worktimeS, int numprojS) : Programmer(idS, nameS, worktimeS, numprojS) {};
	void salH();
	int getSal();
};		

class Manager : public Employee, public Project {		//��������.������ �������� �� ����� �������, ������� ���������.
protected:
	int paym1;
public:
	Manager(int, string, int);
	void salP();
	int getSal();
};

class ProjectManager : public Manager, public Heading {		//��������� ��������.
protected:
	int paym2;
public:
	ProjectManager(int idS, string nameS, int numprojS) : Manager(idS, nameS, numprojS) {};
	void salH();
	int getSal();
};

class SeniorManager : public ProjectManager {		//������������ �����������.
public:
	SeniorManager(int idS, string nameS, int numprojS) : ProjectManager(idS, nameS, numprojS) {};
	void sumSal();
	int getSal();
};

