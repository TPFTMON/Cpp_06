#include "ScalarConverter.hpp"

// ================================================================
//                         ORTHODOX BASE
// ================================================================

// ScalarConverter::ScalarConverter(){

//     std::cout << DEF_CONSTR_MSG << SCALARCONVERTER_MSG;

// }

// ScalarConverter::ScalarConverter(const ScalarConverter &to_copy){

//     std::cout << COPY_CONSTR_MSG << SCALARCONVERTER_MSG;
//     // ... copying

// }

// ScalarConverter& ScalarConverter::operator=(const ScalarConverter &assign){

//     std::cout << COPY_ASSIGN_OP_MSG << SCALARCONVERTER_MSG;
//     if (this != &assign){
//         // ... assigning
//     }
//     return (*this);

// }

// ScalarConverter::~ScalarConverter(){

//     std::cout << DESTR_MSG << SCALARCONVERTER_MSG;

// }



// ================================================================
//                OTHER SCALARCONVERTER MEMBER FUNCTIONS
// ================================================================

void ScalarConverter::convert(const std::string &strLiteral){

    // 1:
    // Is it a char? length == 1 and not a digit.

    // Is it a pseudo-literal? Check against "-inff", "+inff", "nanf", "-inf", "+inf", "nan".

    // Is it an int, float, or double? Look for ., f, and valid digits.

    if (strLiteral.length() == 1 && !std::isdigit(strLiteral[0])){
        char c = strLiteral[0];                                // Then it is a char.
        std::cout << "Initial type: char\n";
        std::cout << "char: '" << c << "'\n";
        std::cout << "int: " << static_cast<int>(c) << "\n";
        std::cout << "float: " << static_cast<float>(c) << ".0f\n";
        std::cout << "double: " << static_cast<double>(c) << ".0\n";
        return ;
    }

    std::string pseudoFloatLiterals[] = {"-inff", "+inff", "nanf"};
    for (int i = 0; i < 3; ++i){
        if (strLiteral == pseudoFloatLiterals[i]){          // Then it is a pseudo-literal float.
            std::cout << "Initial type: float\n";
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: " << strLiteral << "\n";
            std::cout << "double: " << strLiteral.substr(0, strLiteral.length() - 1) << "\n";
            return ;
        }
    }

    std::string pseudoDoubleLiterals[] = {"-inf", "+inf", "nan"};
    for (int i = 0; i < 3; ++i){
        if (strLiteral == pseudoDoubleLiterals[i]){            // Then it is a pseudo-literal double.
            std::cout << "Initial type: double\n";
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: " << strLiteral << "f\n";
            std::cout << "double: " << strLiteral << "\n";
            return ;
        }
    }









    std::cout << "The literal does not match any of the expected formats for char, int, float, or double.\n";

}


// ================================================================
//                  OTHER SCALARCONVERTER FUNCTIONS
// ================================================================

// ... other functions
