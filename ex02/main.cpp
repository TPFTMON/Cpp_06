#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(){

    srand(time(0));

    Base* randomPtr = generate();
    std::cout << "Identifying with pointer: randomPtr is of type: {";
    identify(randomPtr);
    std::cout << "}\n\n";


    std::cout << "Identifying with reference: randomPtr is of type: {";
    identify(*randomPtr);
    std::cout << "}\n\n";


    // Base* base = new Base();
    // std::cout << "Identifying with reference: base is of type: {";
    // identify(*base);
    // std::cout << "}\n";

    delete randomPtr;
    // delete base;

    return (0);
}
