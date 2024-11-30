#ifndef PERMITDURATION_H
#define PERMITDURATION_H

#include <iostream>

class PermitDuration
{
private:
    int _duration;
public:
    PermitDuration() : _duration(0) {}
    PermitDuration(int duration) : _duration(duration) { if (_duration < 0) _duration = 0; if (_duration > 5) _duration = 5; }

    int getDuration() const { return _duration; }
    void setDuration(int duration) { if (duration >= 0 && duration <= 5) _duration = duration; }


    friend std::ostream& operator<<(std::ostream& os, const PermitDuration& rhs);
};

#endif // PERMITDURATION_H
