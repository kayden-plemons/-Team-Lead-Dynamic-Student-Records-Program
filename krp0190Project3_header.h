/*
Project 3 CSCE 1030 Computer Science I

Authors: 
Kayden Plemons, krp0190, kaydenplemons@my.unt.edu
Hansley Omonzane, heo0024, hansleyomonzane@my.unt.edu
Micheal Egboh, mce0100, michealegboh@my.unt.edu
Sunnita Abbasi, sqa0009, sunnitaabbasi@my.unt.edu
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <fstream>
using namespace std;

const int NUMTEST=5; //constant global varible for thenumber of tests
enum menu{Add=1, Remove=2, Display=3, Search=4, Results=5, Exit=6}; //gobal enum vaules for menu choices and switch case. 

struct Student
{
	string name;
	int id;
	int tests;
	int* score;
	double average;
};

void add_Student();
int getNumber();
void remove_student(int studentID);
void display();
void search(int searchID);
double findMinimum (int* scores, int size);
void exportResults();