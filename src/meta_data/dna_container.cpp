
#include "dna_container.h"

std::map<size_t, DnaData*> DnaContainer::idMap;
std::map<const char* , size_t> DnaContainer::nameIdMap;

void DnaContainer::addToMap(DnaData* dna_data)
{
    idMap.insert(std::pair<size_t, DnaData*>(dna_data->getId(), dna_data));
    nameIdMap.insert(std::pair<const char* , size_t>(dna_data->getName(), dna_data->getId()));
}