//
// Created by a on 7/8/20.
//

#include "terminal.h"
#include "utils/parser.h"
#include "factory.h"

void Terminal::runTerminal()
{
    m_writer->write(" > cmd >>> ");
    Parser parser;
    Factory factory;
    (factory.makeFactory(parser.parse(m_reader->read(), " ")))->doAction();
}
