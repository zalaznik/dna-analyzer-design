
#include "dna_container.h"

#include <exception> //for std::exception
#include <iostream> //for std


std::map<size_t, DnaData*> DnaContainer::idMap;
std::map<const char* , size_t> DnaContainer::nameIdMap;

void DnaContainer::addToMap(DnaData* dna_data)
{
    idMap.insert(std::pair<size_t, DnaData*>(dna_data->getId(), dna_data));
    nameIdMap.insert(std::pair<const char* , size_t>(dna_data->getName(), dna_data->getId()));
}


DnaData* DnaContainer::searchDnaById(size_t id_for_search)
{
    std::map<size_t, DnaData*>::iterator itr = idMap.find(id_for_search);

    if(itr == idMap.end())
    {
        throw std::invalid_argument("this ID isn't exist\n");
    }

    return itr->second;
}