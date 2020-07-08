//
// Created by a on 7/8/20.
//

#include "terminal.h"
#include "utils/parser.h"

void Terminal::runTerminal()
{
    m_writer->write(" > cmd >>> ");
    Parser parser;
    parser.parse(m_reader->read(), " ");
    //to send to Factory which decide what command to call to
    //to call to the command which Factory return

}
