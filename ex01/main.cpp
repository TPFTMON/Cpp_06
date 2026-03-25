#include "Serializer.hpp"

int main(void){

    Data *data = new Data();
    data->_importantInt = 59;
    data->_normalDouble = 85.31;
    data->_justString = "Hello, world! And 42!";


    std::cout << "Data struct before serialization:\n";
    std::cout << "importantInt: " << data->_importantInt << "\n";
    std::cout << "normalDouble: " << data->_normalDouble << "\n";
    std::cout << "justString: " << data->_justString << "\n";

    uintptr_t raw = Serializer::serialize(data);

    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "\nData struct after deserialization:\n";
    std::cout << "importantInt: " << deserializedData->_importantInt << "\n";
    std::cout << "normalDouble: " << deserializedData->_normalDouble << "\n";
    std::cout << "justString: " << deserializedData->_justString << "\n";

    delete data;

    return 0;
}
