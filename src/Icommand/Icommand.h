

#ifndef __I_COMMAND_H__
#define __I_COMMAND_H__


class ICommand
{
public:
    virtual ~ICommand(){};
    virtual void doAction() = 0;
};


#endif