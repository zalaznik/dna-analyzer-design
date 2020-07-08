
#include "new.h"
#include "../../meta_data/dna_container.h"

#include <sstream> //for std::ostringstream

New::New(const char* seq, std::string name):m_name(name), m_seq(seq)
{}


void New::doAction()
{
    DnaData* dna_data = new DnaData(m_name.c_str(),m_seq);
    DnaContainer::addToMap(dna_data);
    //to add "catch" if can't add the name as a key cause it's exist
    printRes(*dna_data);
}


void New::printRes(const DnaData& dna_data)
{
    std::cout<<"["<<dna_data.getId()<<"] "<<m_name<<": "<<m_seq<<std::endl;
}


std::string New::determineName()
{
    static size_t serial = 0;
    std::ostringstream castToStr;
    castToStr << ++serial;
    return "seq" + castToStr.str();
}

