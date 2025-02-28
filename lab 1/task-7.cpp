// You are assigned the task of developing a GPA Calculator for FAST-NUCES. The program should accept
// the student's name and marks as input and display the corresponding grade and GPA points based on the
// university�s grading system."
#include <iostream>
using namespace std;
void print(int marks)
{
	string grade;
	float gpa;
	if (marks >= 90)
	{
		grade = "A+";
		gpa = 4;
	}
	else if (marks >= 86)
	{
		grade = "A";
		gpa = 4;
	}
	else if (marks >= 82)
	{
		grade = "A-";
		gpa = 3.67;
	}
	else if (marks >= 78)
	{
		grade = "B+";
		gpa = 3.33;
	}
	else if (marks >= 74)
	{
		grade = "B";
		gpa = 3;
	}
	else if (marks >= 70)
	{
		grade = "B-";
		gpa = 2.67;
	}
	else if (marks >= 66)
	{
		grade = "C+";
		gpa = 2.33;
	}
	else if (marks >= 62)
	{
		grade = "C";
		gpa = 2;
	}
	else if (marks >= 58)
	{
		grade = "C-";
		gpa = 1.67;
	}
	else if (marks >= 54)
	{
		grade = "D+";
		gpa = 1.33;
	}
	else if (marks >= 50)
	{
		grade = "D";
		gpa = 1;
	}
	cout << "grade is :" << grade << endl;
	cout << "gpa is :" << gpa << endl;
}

int main()
{
	string name;
	int marks;
	cout << "Enter name :";
	cin >> name;
	cout << "Enter marks :";
	cin >> marks;

	print(marks);
}
