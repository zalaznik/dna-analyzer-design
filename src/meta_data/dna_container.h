
#ifndef __DNA_CONTAINER_H__
#define __DNA_CONTAINER_H__

#include "dna_data.h"

#include <map>

class DnaContainer
{
public:
    static void addToMap(DnaData& dna_data)
    {
        idMap.insert({dna_data.getId(), &dna_data});
        nameIdMap.insert({dna_data.getName(), dna_data.getId()});
    };


private:
    static std::map<size_t, DnaData*> idMap;
    static std::map<const char* , size_t > nameIdMap;
};



#endif