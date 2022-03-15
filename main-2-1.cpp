#include <iostream>
#include <string.h>
using namespace std;
extern int print_as_binary(string);

int main(int argc,char **argv){
	int number = 5;
	int* pointer = &number;
	cout << pointer << endl;
	return 0 ;
}
