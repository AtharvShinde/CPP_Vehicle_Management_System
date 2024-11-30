#ifndef PERMITDURATION_H
#define PERMITDURATION_H

#include <ostream>

struct PermitDuration
{
    int duration{0};
    constexpr int MIN_DURATION = 0;
    constexpr int MAX_DURATION = 5;

    constexpr PermitDuration(int dur) {
         if (dur < MIN_DURATION) {
            duration = MIN_DURATION;
          } else if (dur > MAX_DURATION) {
            duration = MAX_DURATION;
          } else {
            duration = dur;
          }
          // could also be next but less readable
          // duration = std::min(MAX_DURATION, std::max(MIN_DURATION, dur);
    }

    friend std::ostream& operator<<(std::ostream& os, const PermitDuration& rhs);
};

std::ostream& operator<<(std::ostream& os, const PermitDuration& rhs) {
    os << rhs._duration << " years";
    return os;
}


#endif // PERMITDURATION_H
