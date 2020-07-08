
#ifndef __NEW_H__
#define __NEW_H__

#include <cstddef>//for size_t
#include <string>//for std::string

#include "../Icommand.h"

class DnaData;

class New : public ICommand{
public:
    New(const char* seq, std::string name = determineName());
    void doAction();

private:
    std::string m_name;
    const char* m_seq;

    static std::string determineName();
    void printRes(const DnaData& dna_data);
};

#endif