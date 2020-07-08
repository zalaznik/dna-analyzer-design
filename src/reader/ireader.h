
#ifndef _IREADER_H
#define _IREADER_H

#include <string>//for std::string

class IReader{
public:
    virtual ~IReader(){}
    virtual std::string read() = 0;

};

#endif //DNA_SEQUENCE_IREADER_H
