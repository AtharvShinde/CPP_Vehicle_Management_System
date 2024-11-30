#include "PermitDuration.h"

std::ostream& operator<<(std::ostream& os, const PermitDuration& rhs)
{
    os << rhs._duration << " years";
    return os;
}
