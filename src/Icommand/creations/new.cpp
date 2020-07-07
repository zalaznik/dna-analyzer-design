
#include "new.h"
#include "../../meta_data/dna_container.h"

#include <sstream> //for std::ostringstream

New::New( const char* seq, const char* name)
{
    m_name = name;
    m_seq = seq;
}


void New::doAction()
{
    DnaData dna_data(m_name,m_seq);
    DnaContainer::addToMap(dna_data);
}


void New::printRes()
{

}


const char* New::determineName()
{
    static size_t serial = 0;
    std::ostringstream castToStr;
    castToStr << ++serial;
    return ("seq" + castToStr.str()).c_str();
}





