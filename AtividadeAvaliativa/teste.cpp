// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int main() {
    
    std::string a = "ad";
    std::string b = "daada";
    char carac[10];
    
    for(int index = 0; index < sizeof(carac); index++)
    {
        carac[index] = a[index];
    }
   std::cout << carac << "\n";
    return 0;
}