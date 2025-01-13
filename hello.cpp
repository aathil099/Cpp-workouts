#include <iostream>
#include <string>
#include <math.h>

//comment

int main(){
    int i; //4 bytes.
    int a;
    int sum;
    
    short shrt = 30000; // 2 bytes.
    long lo = 1234567890; //4 or 8 bytes For larger integer ranges.
    long long lolo = 9223372036854775807; // Very large integers. Typically 8 bytes.
    float flo = 3.14; // Single-precision floating point. Typically 4 bytes.
    double doub = 3.1415926535; // More precision than float, Typically 8 bytes.
    long double longdouble = 2.718281828459; //Extended precision. Typically 8, 10, or 16 bytes

    char h = 'A'; //Single character. 1 byte.
    bool t = true; //1 byte (or sometimes 1 bit).
    bool fals = false;

    unsigned int j = 42; //Non-negative integers.
    size_t k = 100; //Used for sizes and indexing

    std::string greet = "oii!";

    sum=a+i;

    std::cout << "Hello" << "\n";
    
    std::cout << "double value = " << doub << "size" << sizeof(doub) << '\n';
    std::cout << "float value = " << flo << std:: endl;
    std::cout << "short value = " << shrt << '\n';
    std::cout << "long value = " << lo << std:: endl;
    std::cout << "longlong value = " << lolo << '\n';
    std::cout << "float value = " << flo << std:: endl;
    std::cout << "long double value = " << longdouble << std:: endl;
    std::cout << "single character : " << h << '\n';
    std::cout << "boolean true: " << t << std:: endl;
    std::cout << "boolean false: " << fals << '\n';
    std::cout << "unsigned value = " << j << std:: endl;
    std::cout << "size of k = " << k << '\n';
    std::cout << "sum = " << sum << std:: endl;
    std::cout << ">> " << greet << " <<" << std:: endl;
    return 0;
}

