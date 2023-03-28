#include <iostream>

using namespace std;

int main() {
    int total;
    int *intPointer = new int;
    
    total = *intPointer;
    total = 25;
    delete intPointer;
    
    cout << total << endl << *intPointer << endl;
    return 0;
}