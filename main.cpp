#include <iostream>

int main() 
{
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << &num << std::endl;

    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&num);  

    std::cout << "Contents of each byte of a number " << num << std::endl;
    for (size_t i = 0; i < sizeof(num); i++) 
    {
        std::cout << "Byte " << i << ": " << static_cast<int>(bytePtr[i]) << std::endl; 
    }

    return 0;
}