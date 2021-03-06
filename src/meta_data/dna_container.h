
#ifndef __DNA_CONTAINER_H__
#define __DNA_CONTAINER_H__

#include "dna_data.h"

#include <map>//for std::map

class DnaContainer
{
public:
    static void addToMap(DnaData* dna_data);
    static DnaData* searchDnaById (size_t id_for_search);

private:
    static std::map<size_t, DnaData*> idMap;
    static std::map<const char* , size_t> nameIdMap;
};


#endif