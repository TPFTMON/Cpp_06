#ifndef BASE_HPP
# define BASE_HPP

// Includes:
# include <iostream>
# include <cstdlib>


// Messages:
# define BASE_MSG "\e[0;32mBase\n\e[0m"

# define DESTR_MSG "\e[0;31mDestructor\e[0m called of "


// Classes:
class Base{

    public:
        virtual ~Base();
        // Without a virtual destructor, the class isn't polymorphic, and dynamic_cast will not compile.

        // Other member functions:
        Base* generate(void);
        void  identify(Base* p);
        void  identify(Base& p);

};

#endif
