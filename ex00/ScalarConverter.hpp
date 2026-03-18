#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

// Includes:
# include <iostream>


// Messages:
# define SCALARCONVERTER_MSG "\e[0;32mScalarConverter\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class ScalarConverter{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &to_copy);
        ScalarConverter& operator=(const ScalarConverter &assign);
        ~ScalarConverter();

        // Other member functions:
        // ... some members

};


// Other:
// ...

#endif
