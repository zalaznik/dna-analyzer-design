//
// Created by a on 9/22/20.
//

#include "file_reader.h"

#include <iostream> // for fstream library
#include <fstream> // for fstream library


FileReader::FileReader(std::string file_name) : m_file_name(file_name)
{}


std::string FileReader::read()
{
    //to add throw command if it couldn't find the file
    std::string str;
    std::ifstream MyReadFile(m_file_name.c_str());
    std::getline (MyReadFile, str);
    MyReadFile.close();
    return str;
}

