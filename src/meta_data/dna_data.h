
#ifndef __DNA_DATA_H__
#define __DNA_DATA_H__

#include "dna_seq.h"

class DnaData
{
public:
    DnaData(size_t id, const char* name, const char* seq):m_id(id),m_name(name),m_dna_seq(seq)
    {};

private:
    size_t m_id;
    const char* m_name;
    DnaSequence m_dna_seq;
};


#endif