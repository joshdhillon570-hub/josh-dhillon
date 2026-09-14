// data type PRIMITIVES
#include <iostream>
int main() {
int a = 5; // integer
float b = 5.5; // floating point
double c = 5.555; // double precision floating point
char d = 'A'; // character 
bool e = true; // boolean
void* f = nullptr; // void pointer

std::cout << "Integer: " << a << std::endl;
std::cout << "Float: " << b << std::endl;
std::cout << "Double: " << c << std::endl;
std::cout << "Character: " << d << std::endl;
std::cout << "Boolean: " << e << std::endl;
std::cout << "Void Pointer: " << f << std::endl;

// DERIVED DATA TYPES
int arr[5] = {1, 2, 3, 4, 5}; // array
int* ptr = &a; // pointer
void (*funcPtr)() = nullptr; // function pointer
int& ref = a; // reference


// user-defined data types
struct Person {
    std::string name;
    int age;
    
 };
}

