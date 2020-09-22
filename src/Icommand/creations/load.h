
#ifndef __LOAD_H__
#define __LOAD_H__

#include <string>//for std::string

#include "../Icommand.h"


class DnaData;

class Load : public ICommand{
public:
    Load(std::string file_name, std::string seq_name = "");
    void doAction();

private:
    std::string m_file_name;
    std::string m_seq_name;

    std::string determineName();
    void printRes(const DnaData* dna_data);
};

#endif
