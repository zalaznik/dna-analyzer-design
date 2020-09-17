
#include "dna_seq.h"

#include <string.h> //for c-string methods
#include <exception> //for std::exception


static bool IsValidDna(std::string dna)
{
    size_t i = 0;

    if(dna[i] == '\0')
        return false;

    while (dna[i] != '\0')
    {
        if(dna[i]!='A' and dna[i]!='C' and dna[i]!='T' and dna[i]!='G')
        {
            return false;
        }
        i++;
    }
    return true;
}


DnaSequence::DnaSequence(const char *dna_Sequence):m_dna_sequence(NULL)
{

    if (IsValidDna(dna_Sequence))
    {

        m_length = strlen(dna_Sequence);

        m_dna_sequence = new Nucleotide[m_length];

        for( size_t i = 0 ; i<m_length ; i++)
        {
            m_dna_sequence[i] = dna_Sequence[i];
        }
    }

    else
    {
        throw std::invalid_argument("invalid DNA\n") ;
    }
}


DnaSequence::DnaSequence(const std::string& dna_Sequence):m_dna_sequence(NULL)
{
    if (IsValidDna(dna_Sequence))
    {
        m_dna_sequence = new Nucleotide[dna_Sequence.length()];
        size_t  i = 0;

        while (dna_Sequence[i]!='\0')
        {
            m_dna_sequence[i] = dna_Sequence[i];
            i++;
        }
        m_length = i;
    }

    else
    {
        throw std::invalid_argument("invalid DNA\n") ;
    }
}


DnaSequence::DnaSequence(const DnaSequence& dna_sequence):m_dna_sequence(NULL)
{

    m_dna_sequence = new Nucleotide[dna_sequence.length()];
    size_t i;

    for (i = 0 ; i<dna_sequence.length(); i++)
    {
        m_dna_sequence[i] = dna_sequence.m_dna_sequence[i].m_nucleotide;
        i++;
    }
    m_length = i;
}


DnaSequence::~DnaSequence()
{
    delete[] m_dna_sequence;
}


DnaSequence& DnaSequence::operator=(const DnaSequence& dna_sequence)
{
    if(strcmp(getMDnaSequence(), dna_sequence.getMDnaSequence()) == 0)
    {
        return *this;
    }

    if(length()!=dna_sequence.length())
    {
        Nucleotide* temp = new Nucleotide[dna_sequence.length()];
        delete[] m_dna_sequence;
        m_dna_sequence = temp;
    }

    else
    {
        delete[] m_dna_sequence;
    }

    size_t  i = 0;

    while ( (dna_sequence.getMDnaSequence())[i]!='\0')
    {
        m_dna_sequence[i].m_nucleotide = dna_sequence.getMDnaSequence()[i];
        i++;
    }
    m_length = dna_sequence.length();
    return *this;

}


DnaSequence::Nucleotide& DnaSequence::operator[](size_t index) const
{
    if (index >= length())
    {
        std::cout << "index out of the range" << std::endl;
        //throw;
    }

    return m_dna_sequence[index];
}


size_t  DnaSequence::length() const
{
    return m_length;
}


const char* DnaSequence::getMDnaSequence() const
{
    char* char_dna_sequence = new char[length()+1];
    size_t i;

    for (i = 0 ; i<length(); i++)
    {
        char_dna_sequence[i] = m_dna_sequence[i].m_nucleotide;
    }
    char_dna_sequence[i] = '\0';

    return char_dna_sequence;
}

