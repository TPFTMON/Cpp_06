#include "Base.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

Base::Base(){

    std::cout << DEF_CONSTR_MSG << BASE_MSG;

}

Base::Base(const Base &to_copy){

    std::cout << COPY_CONSTR_MSG << BASE_MSG;
    // ... copying

}

Base& Base::operator=(const Base &assign){

    std::cout << COPY_ASSIGN_OP_MSG << BASE_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

Base::~Base(){

    std::cout << DESTR_MSG << BASE_MSG;

}



// ================================================================
//                OTHER BASE MEMBER FUNCTIONS
// ================================================================

Base* Base::generate(void){

}

void  Base::identify(Base* p){

}

void  Base::identify(Base& p){

}




// ================================================================
//                  OTHER BASE FUNCTIONS
// ================================================================

// ... other functions
