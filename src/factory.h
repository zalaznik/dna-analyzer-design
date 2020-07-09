//
// Created by a on 7/9/20.
//

#ifndef SRC_FACTORY_H
#define SRC_FACTORY_H

#include "Icommand/Icommand.h"

#include <vector> //for std::vector
#include <string> //for std::string

class Factory{
public:
    ICommand* makeFactory(std::vector<std::string> vec);

};


#endif //SRC_FACTORY_H
