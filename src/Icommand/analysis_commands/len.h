//
// Created by a on 9/16/20.
//

#ifndef SRC_LEN_H
#define SRC_LEN_H


#include "../Icommand.h"

#include <cstddef>//for size_t


class Len : public ICommand {
public:
    Len(size_t id_for_search);
    void doAction();

private:
    size_t m_id_for_search;

    void printRes(size_t length);
};


#endif //SRC_LEN_H
