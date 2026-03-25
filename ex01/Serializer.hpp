#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// Includes:
# include <iostream>
# include <stdint.h>


// Classes:
class Data{
    public:
        int _importantInt;
        double _normalDouble;
        std::string _justString;
};

class Serializer{

    // private:

    public:

        // Other member functions:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};

#endif
