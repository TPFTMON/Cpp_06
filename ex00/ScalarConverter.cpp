#include "ScalarConverter.hpp"


// ================================================================
//                OTHER SCALARCONVERTER MEMBER FUNCTIONS
// ================================================================

// Okay. Now I'm finally happpy.

static void printConversions(double dBuffer, bool isPseudo){

    // 1. CHAR
    std::cout << "char: ";
    if (isPseudo || dBuffer < 0 || dBuffer > 127 || std::isnan(dBuffer))
        std::cout << "impossible" << "\n";
    else if (!std::isprint(static_cast<int>(dBuffer)))
        std::cout << "Non displayable" << "\n";
    else
        std::cout << "'" << static_cast<char>(dBuffer) << "'" << "\n";

    // 2. INT
    std::cout << "int: ";
    if (isPseudo || dBuffer < INT_MIN || dBuffer > INT_MAX || std::isnan(dBuffer))
        std::cout << "impossible" << "\n";
    else
        std::cout << static_cast<int>(dBuffer) << "\n";

    // 3. FLOAT & DOUBLE
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(dBuffer) << "f" << "\n";
    std::cout << "double: " << dBuffer << "\n";
}

void ScalarConverter::convert(const std::string &str){

    char* end;
    double dBuffer = std::strtod(str.c_str(), &end);

    if (str == "nan" || str == "nanf" || str == "+inf" ||
            str == "+inff" || str == "-inf" || str == "-inff"){
        double dBuffer = std::strtod(str.c_str(), NULL);
        printConversions(dBuffer, true);
        return;
    }

    if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0])){  // then it's a char
        char c = str[0];
        std::cout << "The actual input's type: char\n";
        printConversions(static_cast<double>(c), false);
        return;
    }

    if (*end == 'f' && *(end + 1) == '\0'){     // If 'end' points to 'f' and it's the last char, then it's a float
        // Parsed as ''''float''''
        std::cout << "The actual input's type: float\n";
        printConversions(dBuffer, false);
    }
    else if (*end == '\0' && str.find('.') != std::string::npos){  // If 'end' points to null and there's a decimal point,
        std::cout << "The actual input's type: double\n";          // then it's a double
        printConversions(dBuffer, false);
    }
    else if (*end == '\0' && str.find('.') == std::string::npos){  // If 'end' points to null and there's no decimal point,
        std::cout << "The actual input's type: int\n";             // then it's an int
        printConversions(dBuffer, false);
    }
    else{
        std::cout << "The input's type was not recognized." << "\n";
        std::cout << "char: impossible" << "\n";
        std::cout << "int: impossible" << "\n";
        std::cout << "float: nanf" << "\n";
        std::cout << "double: nan" << "\n";
    }
}
