
#ifndef __DNA_SEQ_H__
#define __DNA_SEQ_H__


class New : public Icommand{
public:
    New(const char* args[]);
    void doAction();

private:
    size_t m_id;
    const char* m_name;
    const char* m_seq;
};

#endif