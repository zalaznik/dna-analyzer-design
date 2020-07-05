
#include "new.h"

#include "dna_data.h"

New::New(const char* args [])
{
    m_id = (size_t)args[0];
    m_name = args[1];
    m_seq = args[2]
}


void New::doAction()
{
    DnaData(m_id,m_name,m_seq);
    //add to container
}