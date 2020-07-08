//
// Created by a on 7/9/20.
//

#ifndef SRC_PARSER_H
#define SRC_PARSER_H

#include <vector>//for std::;vector
#include <string>//for std::string

class Parser{
public:
    std::vector<std::string> parse(std::string str, std::string delimiter);

};


#endif //SRC_PARSER_H
