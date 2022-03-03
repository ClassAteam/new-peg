#include "switcher.h"

switcher::switcher(bool* arrInd)
{
    status = arrInd;
}

std::string switcher::whtStatus()
{
    if(*status)
        return "thereis some positive status";
    else
        return "huy";
}
