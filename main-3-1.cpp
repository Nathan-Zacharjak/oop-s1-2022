#include <iostream>

using namespace std;

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(int argc, char const *argv[]){
    cout << "First array of numbers: " << endl;
    int* numbers1 = readNumbers();
    cout << "Second array of numbers: " << endl;
    int* numbers2 = readNumbers();
    
    bool result = equalsArray(numbers1, numbers2, 10);

    cout << "Result: ";
    if (result == true){
        cout << "True";
    } else {
        cout << "False";
    }
    cout << endl;

    delete[] numbers1;
    delete[] numbers2;

    return 0;
}
