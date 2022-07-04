#include <iostream>
#include <string>

class SexagenaryCycle
{
private:
    unsigned char mNHeavenlyStem;
    unsigned char mNHeavenlyStemCycle;
    unsigned char mNEarthlyBranch;
    unsigned char mNEarthlyBranchCycle;
    std::string mHeavenlyStem;
    std::string mEarthlyBranch;
    
public:
    SexagenaryCycle(const unsigned char& heavenlyStem, const unsigned char& cycle, const bool& isHeavenlyStem);
    friend std::ostream& operator << (std::ostream& out, const SexagenaryCycle& s);
};
