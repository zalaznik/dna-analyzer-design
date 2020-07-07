

#include "dna_data.h"

size_t DnaData::determineId()
{
    static size_t id = 0;
    return ++id;
}

