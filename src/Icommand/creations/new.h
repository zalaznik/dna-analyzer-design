
#ifndef __NEW_H__
#define __NEW_H__

#include <cstddef>//for size_t

#include "../Icommand.h"

class DnaData;

class New : public ICommand{
public:
    New(const char* seq, const char* name = determineName());
    void doAction();

private:
    const char* m_name;
    const char* m_seq;
    static const char* determineName();
    void printRes(const DnaData& dna_data);
};

#endif