
#ifndef __DNA_DATA_H__
#define __DNA_DATA_H__

#include "dna_seq.h"

class DnaData
{
public:
    DnaData(const char* name, const char* seq):m_id(determineId()),m_name(name),m_dna_seq(seq){};
    size_t getId() const{return m_id;};
    const char* getName() const{ return  m_name;}
    const DnaSequence& getDnaSeq() const {return m_dna_seq;}

private:
    size_t m_id;
    const char* m_name;
    DnaSequence m_dna_seq;
    static size_t determineId();
};


#endif