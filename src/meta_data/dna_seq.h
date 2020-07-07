

#ifndef __DNA_SEQ_H__
#define __DNA_SEQ_H__

#include <iostream> //for std


class DnaSequence{

private:
    class  Nucleotide
    {
    public:
        Nucleotide(){};
        //Nucleotide(char nucleotide):m_nucleotide(nucleotide){};

        Nucleotide& operator= (char nucleotide)
        {
            if(nucleotide!='A' and nucleotide!='C' and nucleotide!='T' and nucleotide!='G')
            {
                std::cout<<"invalid nocleotide"<<std::endl;
                //throw
            }

            m_nucleotide = nucleotide;
            return *this;
        };

        char getMatchNucleotide() const;

        char m_nucleotide;

    };

    Nucleotide* m_dna_sequence;
    size_t  m_length;


public:
    DnaSequence(){}
    DnaSequence(const char* dna_sequence);
    DnaSequence(const std::string& dna_sequence);
    DnaSequence(const DnaSequence& dna_sequence);
    ~DnaSequence();
    DnaSequence& operator=(const DnaSequence& dna_sequence);
    DnaSequence::Nucleotide& operator[](size_t index) const;
    size_t length() const;
    const char* getMDnaSequence() const;

};

#endif
