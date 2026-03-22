#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// Includes:
# include <iostream>


// Classes:
class Data{
    public:
        int _importantInt;
        float _normalFloat;
        std::string _justString;
};

class Serializer{

    public:

        // Other member functions:
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);

};


// Other:
// ...

#endif
