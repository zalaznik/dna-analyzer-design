
#ifndef __SCREEN_WRITER_H__
#define __SCREEN_WRITER_H__

#include "iwriter.h"


class ScreenWriter: public IWriter{
public:
    /*virtual*/void write(std::string str) const;

};

#endif //__SCREEN_WRITER_H__
