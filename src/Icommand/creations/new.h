
#ifndef __NEW_H__
#define __NEW_H__

#include <cstddef>//for size_t

#include "../Icommand.h"


class New : public ICommand{
public:
    New(const char* seq, const char* name = determineName());
    void doAction();
    void printRes();

private:
    const char* m_name;
    const char* m_seq;
    static const char* determineName();
};

#endif