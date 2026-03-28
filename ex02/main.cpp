#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(){

    srand(time(0));
    Base* base = new Base();

    Base* randomPtr = base->generate();
    std::cout << "Identifying with pointer: randomPtr is of type: {";
    base->identify(randomPtr);
    std::cout << "}\n\n";


    std::cout << "Identifying with reference: randomPtr is of type: {";
    base->identify(*randomPtr);
    std::cout << "}\n\n";


    // std::cout << "Identifying with reference: base is of type: {";
    // base->identify(*base);
    // std::cout << "}\n";

    delete base;
    delete randomPtr;

    return (0);
}
