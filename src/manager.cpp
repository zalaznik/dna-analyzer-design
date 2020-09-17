//
// Created by a on 7/8/20.
//

#include "manager.h"

void Manager::runManager(IReader* reader, IWriter* writer)
{
    Terminal terminal(reader, writer);

    while (1)//to change to quit command
    {
        terminal.runTerminal();
    }
}


