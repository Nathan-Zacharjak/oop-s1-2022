#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

extern int print_class(string courses[4], string students[], int report_card[][4], int nstudents);

int main(int argc,char **argv){
	string courses[4] = {"Maths", "English", "Science", "History"};
	string students[5] = {"Bob", "Bill", "Ben", "Sally", "Angie"};
	int report_card[][4] = {{1,2,3,4},
							{5,6,7,8},
							{9,10,11,12},
							{13,14,15,16},
							{17,18,19,20}};
	int nstudents = 5;	
	print_class(courses,students,report_card,nstudents);
	return 0;
}

