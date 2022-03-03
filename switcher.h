#ifndef SWITCH_H_
#define SWITCH_H_
#include <string>

class switcher
{
    public:
        switcher(bool* arrInd);
        std::string whtStatus();

    private:
        bool* status;
};



#endif // SWITCH_H_
