//
// Created by a on 9/16/20.
//

#include "len.h"

#include "../../meta_data/dna_container.h"


Len::Len(size_t id_for_search):m_id_for_search(id_for_search)
{}



void Len::doAction()
{
    size_t length = ((DnaContainer::searchDnaById(m_id_for_search))->getDnaSeq()).length();
    printRes(length);
}



void Len::printRes(size_t length)
{
    std::cout << "id: " << m_id_for_search << ", length: " << length << std::endl;
}