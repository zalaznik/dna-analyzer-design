
#include "keyboard_reader.h"

#include <iostream>//for std::cin

std::string KeyboardReader::read()
{
    std::string str;
    std::getline(std::cin, str);
    return str;
}
