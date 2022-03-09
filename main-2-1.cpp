#include <iostream>
#include <string.h>
using namespace std;
extern int print_as_binary(string);

int main(int argc,char **argv){
	string decimal_number = "75";
	print_as_binary(decimal_number);
	return 0 ;
}
