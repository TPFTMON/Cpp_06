#include "ScalarConverter.hpp"


// ================================================================
//                OTHER SCALARCONVERTER MEMBER FUNCTIONS
// ================================================================

void ScalarConverter::convert(const std::string &strLiteral){

}

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
        std::cout << "double: " << static_cast<double>(c) << ".0\n"; ////////// Should I print .0 and .0f? Why doesn't the static_cast do it itself?
        return ;
    }

    // think what to do with non-displayable chars. ////////////////////////////

    std::string pseudoFloatLiterals[] = {"-inff", "+inff", "nanf"};
    for (int i = 0; i < 3; ++i){
        if (strLiteral == pseudoFloatLiterals[i]){          // Then it is a pseudo-literal float.
            float f = static_cast<float>(std::strtof(strLiteral.c_str(), NULL));
            std::cout << "Initial type: float\n";
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            // std::cout << "char: " << static_cast<char>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
            // std::cout << "int: " << static_cast<int>(std::strtod(strLiteral.c_str(), NULL)) << "\n";

            // std::cout << "float: " << strLiteral << "\n";
            // std::cout << "double: " << strLiteral.substr(0, strLiteral.length() - 1) << "\n";
            std::cout << "float: " << static_cast<float>(f) << "\n";
            std::cout << "double: " << static_cast<double>(f) << "\n";
            return ;
        }
    }

    std::string pseudoDoubleLiterals[] = {"-inf", "+inf", "nan"};
    for (int i = 0; i < 3; ++i){
        if (strLiteral == pseudoDoubleLiterals[i]){            // Then it is a pseudo-literal double.
            std::cout << "Initial type: double\n";
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: " << static_cast<float>(std::strtof(strLiteral.c_str(), NULL)) << "\n";
            std::cout << "double: " << static_cast<double>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
            return ;
        }
    }

    if (strLiteral.find('.') != std::string::npos){          // Then it is a float or double.
        if (strLiteral[strLiteral.length() - 1] == 'f'){                     // Then it is a float.
            std::cout << "Initial type: float\n";
            std::cout << "char: " << static_cast<char>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
            std::cout << "int: " << static_cast<int>(std::strtod(strLiteral.c_str(), NULL)) << "\n";;
            std::cout << "float: " << static_cast<float>(std::strtof(strLiteral.c_str(), NULL)) << "\n";
            std::cout << "double: " << static_cast<double>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
            return ;
        }
        else{                                               // Then it is a double.
            std::cout << "Initial type: double\n";
            std::cout << "char: " << static_cast<char>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
            std::cout << "int: " << static_cast<int>(std::strtod(strLiteral.c_str(), NULL)) << "\n";;
            std::cout << "float: " << static_cast<float>(std::strtof(strLiteral.c_str(), NULL)) << "\n";
            std::cout << "double: " << static_cast<double>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
            return ;
        }
    }

    if (strLiteral.find_first_not_of("-+0123456789") == std::string::npos){          // Then it is an int.
        std::cout << "Initial type: int\n";
        std::cout << "char: " << static_cast<char>(std::strtol(strLiteral.c_str(), NULL, 10)) << "\n";
        std::cout << "int: " << static_cast<int>(std::strtol(strLiteral.c_str(), NULL, 10)) << "\n";;
        std::cout << "float: " << static_cast<float>(std::strtof(strLiteral.c_str(), NULL)) << "\n";
        std::cout << "double: " << static_cast<double>(std::strtod(strLiteral.c_str(), NULL)) << "\n";
        return ;
    }

    std::cout << "The literal does not match any of the expected formats for char, int, float, or double.\n";

}


// ================================================================
//                  OTHER SCALARCONVERTER FUNCTIONS
// ================================================================

// ... other functions
