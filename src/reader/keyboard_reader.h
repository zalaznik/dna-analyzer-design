
#ifndef _KEYBOARD_READER_H
#define _KEYBOARD_READER_H


#include "ireader.h"

class KeyboardReader: public IReader{
public:
    std::string read();
};

#endif //DNA_SEQUENCE_KEYBOARD_READER_H


