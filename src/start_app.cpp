//
// Created by a on 7/8/20.
//

#include "start_app.h"

void StartApp::start(IReader* reader, IWriter* writer)
{
    Manager manager;
    manager.runManager(reader, writer);
}