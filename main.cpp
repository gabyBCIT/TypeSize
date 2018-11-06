#include <iostream>
#include <limits>
#include <ntsid.h>

int main() {
    //Header
    std::cout << "Type\t\t\t\t\t|\tSize (B)\t|\tMinimum Value\t\t\t|\tMaximum Value\n\n";

    //Boolean
    std::cout << "bool\t\t\t\t\t|\t" << sizeof(bool);
    std::cout  << "\t\t\t|\t" << std::numeric_limits<bool>::lowest();
    std::cout << "\t\t\t\t\t\t|\t" << std::numeric_limits<bool>::max() << std::endl;

    //Short int
    std::cout << "short int\t\t\t\t|\t" << sizeof(short);
    std::cout  << "\t\t\t|\t" << std::numeric_limits<short>::lowest();
    std::cout << "\t\t\t\t\t|\t" << std::numeric_limits<short>::max() << std::endl;

    //Unsigned short int
    std::cout << "unsigned short int\t\t|\t" << sizeof(ushort);
    std::cout  << "\t\t\t|\t" << std::numeric_limits<ushort>::lowest();
    std::cout << "\t\t\t\t\t\t|\t" << std::numeric_limits<ushort>::max() << std::endl;

    //int
    std::cout << "int\t\t\t\t\t\t|\t" << sizeof(int);
    std::cout  << "\t\t\t|\t" << std::numeric_limits<int>::lowest();
    std::cout << "\t\t\t\t|\t" << std::numeric_limits<int>::max() << std::endl;

    //Unsigned int
    std::cout << "unsigned int\t\t\t|\t" << sizeof(uint);
    std::cout << "\t\t\t|\t" << std::numeric_limits<uint>::lowest();
    std::cout << "\t\t\t\t\t\t|\t" << std::numeric_limits<uint>::max() << std::endl;

    //Long int
    std::cout << "long int\t\t\t\t|\t" << sizeof(long);
    std::cout << "\t\t\t|\t" << std::numeric_limits<long>::lowest();
    std::cout << "\t|\t" << std::numeric_limits<long>::max() << std::endl;

    //Unsigned long int

    std::cout << "unsigned long int\t\t|\t" << sizeof(unsigned long);
    std::cout << "\t\t\t|\t" << std::numeric_limits<unsigned long>::lowest();
    std::cout << "\t\t\t\t\t\t|\t" << std::numeric_limits<unsigned long>::max() << std::endl;

    //Long long int
    std::cout << "long long int\t\t\t|\t" << sizeof(long long);
    std::cout << "\t\t\t|\t" << std::numeric_limits<long long>::lowest();
    std::cout << "\t|\t" << std::numeric_limits<long long>::max() << std::endl;


    //Unsigned long long int
    std::cout << "unsigned long long int\t|\t" << sizeof(unsigned long long);
    std::cout << "\t\t\t|\t" << std::numeric_limits<unsigned long long>::lowest();
    std::cout << "\t\t\t\t\t\t|\t" << std::numeric_limits<unsigned long long>::max() << std::endl;

    //Float
    std::cout << "float\t\t\t\t\t|\t" << sizeof(float);
    std::cout << "\t\t\t|\t" << std::numeric_limits<float>::lowest();
    std::cout << "\t\t\t|\t" << std::numeric_limits<float>::max() << std::endl;

    //Double
    std::cout << "double\t\t\t\t\t|\t" << sizeof(double);
    std::cout << "\t\t\t|\t" << std::numeric_limits<double>::lowest();
    std::cout << "\t\t\t|\t" << std::numeric_limits<double>::max() << std::endl;

    //Long double
    std::cout << "long double\t\t\t\t|\t" << sizeof(long double);
    std::cout << "\t\t\t|\t" << std::numeric_limits<long double>::lowest();
    std::cout << "\t\t\t|\t" << std::numeric_limits<long double>::max() << std::endl;

    //Char
    std::cout << "char\t\t\t\t\t|\t" << sizeof(char);
    std::cout << "\t\t\t|\t" << (int) std::numeric_limits<char>::lowest();
    std::cout << "\t\t\t\t\t|\t" << (int) std::numeric_limits<char>::max() << std::endl;

    //Unsigned char
    //Char
    std::cout << "unsigned char\t\t\t|\t" << sizeof(unsigned char);
    std::cout << "\t\t\t|\t" << (int) std::numeric_limits<unsigned char>::lowest();
    std::cout << "\t\t\t\t\t\t|\t" << (int) std::numeric_limits<unsigned char>::max() << std::endl;

    return 0;
}
