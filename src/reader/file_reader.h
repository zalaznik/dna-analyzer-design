//
// Created by a on 9/22/20.
//

#ifndef SRC_FILE_READER_H
#define SRC_FILE_READER_H


#include "ireader.h"

class FileReader : public IReader{
public:
    FileReader(std::string file_name);
    std::string read();

private:
    std::string m_file_name;
};


#endif //SRC_FILE_READER_H
