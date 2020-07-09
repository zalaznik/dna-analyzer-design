//
// Created by a on 7/9/20.
//

#include "factory.h"

#include "Icommand/creations/new.h"

ICommand* Factory::makeFactory(std::vector<std::string> vec)
{
    if(vec[0] == "new")
    {
        if(vec.size() == 3)
        {
            //throw an exception if the first char in vec[2] wasn't @
            New* new_obj = new New(vec[1], vec[2].erase(0, 1));
            return new_obj;
        }
        else
        {
            New* new_obj = new New(vec[1]);
            return new_obj;
        }
    }

    else
    {
        throw ;
       //throw an exception : invalid command / command not found
    }
}