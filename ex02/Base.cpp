#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Base::~Base(){

    std::cout << DESTR_MSG << BASE_MSG;

}


// ================================================================
//                OTHER BASE MEMBER FUNCTIONS
// ================================================================

// returns allocated instance of A, B or C (randomly)
Base* Base::generate(void){

    int whichClass = rand() % 3;

    switch (whichClass){
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (NULL);
}

void  Base::identify(Base* p){

    if (dynamic_cast<A*>(p)){      // dynamic_cast returns a NULL pointer is the cast fails
        std::cout << "A";
    }
    else if (dynamic_cast<B*>(p)){
        std::cout << "B";
    }
    else if (dynamic_cast<C*>(p)){
        std::cout << "C";
    }
    // else if (dynamic_cast<Base*>(p)){
    //     std::cout << "Base";
    // }
}

void  Base::identify(Base& p){

    try{                              // I had to use try-catch blocks here because dynamic_cast throws
        (void)dynamic_cast<A&>(p);    // an exception that is defined in std::typeinfo when the cast fails
        std::cout << "A";
    }
    catch (std::exception &e){}

    try{
        (void)dynamic_cast<B&>(p); // Also, we silence the unused variable error
        std::cout << "B";
    }
    catch (std::exception &e){}

    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "C";
    }
    catch (std::exception &e){}
}
