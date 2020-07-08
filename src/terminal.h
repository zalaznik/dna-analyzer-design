//
// Created by a on 7/8/20.
//

#ifndef SRC_TERMINAL_H
#define SRC_TERMINAL_H


#include "reader/ireader.h"
#include "writer/iwriter.h"


class Terminal{
public:
    Terminal(IReader* reader, IWriter* writer):m_reader(reader), m_writer(writer){};
    void runTerminal();

private:
    IReader* m_reader;
    IWriter* m_writer;
};

#endif //SRC_TERMINAL_H

