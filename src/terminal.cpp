//
// Created by a on 7/8/20.
//

#include "terminal.h"

void Terminal::runTerminal()
{
    m_writer->write(" > cmd >>> ");
    m_reader->read();
    //to parse what return value from read
    //to send to Factory which decide what command to call to
    //to call to the command which Factory return

}
