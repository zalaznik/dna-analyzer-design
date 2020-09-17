//
// Created by a on 7/8/20.
//

#include "terminal.h"
#include "utils/parser.h"
#include "factory.h"
#include <exception> //for std::exception
#include <iostream> // for std::cout



void Terminal::runTerminal()
{
    m_writer->write(" > cmd >>> ");
    Parser parser;
    Factory factory;

    try
    {
        (factory.makeFactory(parser.parse(m_reader->read(), " "))) -> doAction();
    }

    catch(const std::exception &e)
    {
        std::cout << e.what() << "please try again " << std::endl;
    }
}

