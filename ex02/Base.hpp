#ifndef BASE_HPP
# define BASE_HPP

// Includes:
# include <iostream>


// Messages:
# define BASE_MSG "\e[0;32mBase\n\e[0m"

# define DEF_CONSTR_MSG "\e[0;33mDefault Constructor\e[0m called of "
# define COPY_CONSTR_MSG "\e[0;33mCopy Constructor\e[0m called of "
# define COPY_ASSIGN_OP_MSG "\e[0;35mCopy assignment operator\e[0m called of "
# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Base{

    private:
        // ... some private stuff

    public:
        // Orthodox Canonical Form:
        Base();
        Base(const Base &to_copy);
        Base& operator=(const Base &assign);
        ~Base();

        // Other member functions:
        Base* generate(void);
        void  identify(Base* p);
        void  identify(Base& p);

};


// Other:
// ...

#endif
