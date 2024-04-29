#pragma once

#include <string>


using namespace std;

namespace Gymmanagment{
public  class Member//represents a gym member.
{
public:
	Member() {}
	int member_id, age;
	string full_name, address, email, phone_number, registration_date,subscription;
	int duration;
	

};
public class Employee // represents a gym employee.
{
public:
	Employee() {}
	int age;
	string  full_name, address, email, phone_number, hire_date, position,subscription;
	double monthly_salary;
	};

public class MemberNode//represents a single Member in the list.
{
public:
	MemberNode* prev,* next;
	Member data;

	MemberNode(Member member)
	{
		prev = next = NULL;
		data = member;
	}
};
public class EmployeeNode//represents a single employee in the list.
{
public:
	EmployeeNode* prev,* next;
	Employee data;

	EmployeeNode(Employee employee)
	{
		prev = next = NULL;
		data = employee;
	}
};
}

