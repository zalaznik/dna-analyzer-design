
#include "load.h"

#include "../../reader/file_reader.h"
#include "../../meta_data/dna_container.h"

#include <iostream>     // for std::cout
#include <sstream>      // for std::stringstream


Load::Load(std::string file_name, std::string seq_name):m_file_name(file_name), m_seq_name(seq_name)
{}


void Load::doAction()
{
    //read the DNA from the file
    FileReader file_reader(m_file_name);

    if(m_seq_name == "")
    {
        m_seq_name = determineName();
    }

    std::string seq = file_reader.read().c_str();
    DnaData* dna_data = new DnaData(m_seq_name.c_str(), seq.c_str());
    DnaContainer::addToMap(dna_data);
    //to add "catch" if can't add the name as a key cause it's exist
    printRes(dna_data);
}


void Load::printRes(const DnaData* dna_data)
{
    std::cout<< "[" << dna_data->getId() << "] " << m_seq_name << ": " << (dna_data->getDnaSeq()).getMDnaSequence() << std::endl;
}


std::string Load::determineName()
{
    std::stringstream s_stream(m_file_name);
    std::string substr;
    getline(s_stream, substr, '.');
    return substr;
}

