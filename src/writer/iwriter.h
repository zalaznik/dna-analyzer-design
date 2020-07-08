
#ifndef __IWRITER_H__
#define __IWRITER_H__

#include <string> //for std::string

class IWriter{
public:
    virtual ~IWriter(){}
    virtual void write(std::string str) const = 0;
};

#endif //__IWRITER_H__
