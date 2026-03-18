#include "ScalarConverter.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

ScalarConverter::ScalarConverter(){

    std::cout << DEF_CONSTR_MSG << SCALARCONVERTER_MSG;

}

ScalarConverter::ScalarConverter(const ScalarConverter &to_copy){

    std::cout << COPY_CONSTR_MSG << SCALARCONVERTER_MSG;
    // ... copying

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &assign){

    std::cout << COPY_ASSIGN_OP_MSG << SCALARCONVERTER_MSG;
    if (this != &assign){
        // ... assigning
    }
    return (*this);

}

ScalarConverter::~ScalarConverter(){

    std::cout << DESTR_MSG << SCALARCONVERTER_MSG;

}



// ================================================================
//                OTHER SCALARCONVERTER MEMBER FUNCTIONS
// ================================================================

// ... other members



// ================================================================
//                  OTHER SCALARCONVERTER FUNCTIONS
// ================================================================

// ... other functions
