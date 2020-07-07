
#include "new.h"

#include "../../meta_data/dna_container.h"

New::New(const char* args [])
{
    m_id = (size_t)args[0];
    m_name = args[1];
    m_seq = args[2];
}


void New::doAction()
{
    DnaData dna_data(m_id,m_name,m_seq);
    DnaContainer::addToMap(dna_data);
}
