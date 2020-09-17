//
// Created by a on 7/9/20.
//

#include "factory.h"

#include "Icommand/creations/new.h"
#include "Icommand/analysis_commands/len.h"

#include <exception> //for std::exception
#include <iostream> //for std

//#include <sstream>

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

        else if(vec.size() == 2)
        {
            New* new_obj = new New(vec[1]);
            return new_obj;
        }

        else
        {
            throw std::invalid_argument("The amount of arguments is not appropriate\n") ;
        }
    }

//
//    else if(vec[0] == "len")
//    {
//        if(vec.size() == 2)
//        {
            //throw an exception if the first char in vec[1] wasn't <...>
//            std::string str(vec[1].erase(0, 1));
//            std::cout << (str).erase(str.end() - 1));
//            std::stringstream sstream(size_t((vec[1].erase(0, 1)).erase(vec[1].end() - 1)));
//            size_t len;
//            sstream >> len;
//
//            Len* len_obj = new Len(len);
//            return len_obj;
//        }

//        else
//        {
//            throw std::invalid_argument("The amount of arguments is not appropriate\n") ;
//        }
//    }


    else
    {
        throw std::invalid_argument("command not found\n") ;
    }
}
