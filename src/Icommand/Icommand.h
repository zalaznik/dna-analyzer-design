

#ifndef __I_COMMAND_H__
#define __I_COMMAND_H__


class ICommand
{
public:
    virtual void doAction() = 0;
    virtual void printRes() = 0;
};


#endif