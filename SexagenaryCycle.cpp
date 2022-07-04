#include "SexagenaryCycle.hpp"

SexagenaryCycle::SexagenaryCycle(const unsigned char& sexagenaryCycle, const unsigned char& cycle, const bool& isHeavenlyStem)
{
    if (isHeavenlyStem) {
        mNHeavenlyStem = sexagenaryCycle; mNHeavenlyStemCycle = cycle % 7;
        mNEarthlyBranch = (mNHeavenlyStem + 10 * mNHeavenlyStemCycle - 10) % 12;
        mNEarthlyBranchCycle = (mNHeavenlyStem + 10 * mNHeavenlyStemCycle - mNEarthlyBranch + 2) / 12;
    }
    else {
        mNEarthlyBranch = sexagenaryCycle; mNEarthlyBranchCycle = cycle % 6;
        mNHeavenlyStem = (mNEarthlyBranch + 12 * mNEarthlyBranchCycle - 12) % 10;
        mNHeavenlyStemCycle = (mNEarthlyBranch + 12 * mNEarthlyBranchCycle - 2 - mNHeavenlyStem) / 10;
    }
    
    if (mNHeavenlyStem == 1) mHeavenlyStem = "GAP";
    else if (mNHeavenlyStem == 2) mHeavenlyStem = "EUL";
    else if (mNHeavenlyStem == 3) mHeavenlyStem = "BYEONG";
    else if (mNHeavenlyStem == 4) mHeavenlyStem = "JEONG";
    else if (mNHeavenlyStem == 5) mHeavenlyStem = "MU";
    else if (mNHeavenlyStem == 6) mHeavenlyStem = "GI";
    else if (mNHeavenlyStem == 7) mHeavenlyStem = "GYEONG";
    else if (mNHeavenlyStem == 8) mHeavenlyStem = "SIN";
    else if (mNHeavenlyStem == 9) mHeavenlyStem = "IM";
    else if (mNHeavenlyStem == 10) mHeavenlyStem = "GYE";
    
    if (mNEarthlyBranch == 1) mEarthlyBranch = "JA";
    else if (mNEarthlyBranch == 2) mEarthlyBranch = "CHUK";
    else if (mNEarthlyBranch == 3) mEarthlyBranch = "IN";
    else if (mNEarthlyBranch == 4) mEarthlyBranch = "MYO";
    else if (mNEarthlyBranch == 5) mEarthlyBranch = "JIN";
    else if (mNEarthlyBranch == 6) mEarthlyBranch = "SA";
    else if (mNEarthlyBranch == 7) mEarthlyBranch = "O";
    else if (mNEarthlyBranch == 8) mEarthlyBranch = "MI";
    else if (mNEarthlyBranch == 9) mEarthlyBranch = "SIN";
    else if (mNEarthlyBranch == 10) mEarthlyBranch = "YU";
    else if (mNEarthlyBranch == 11) mEarthlyBranch = "SUL";
    else if (mNEarthlyBranch == 0) mEarthlyBranch = "HAE";
}

std::ostream& operator << (std::ostream& out, const SexagenaryCycle& s) {
    out << "HeavenlyStem : " << s.mHeavenlyStem << ", Cycle of " << s.mHeavenlyStem << " : " << static_cast<int>(s.mNHeavenlyStemCycle) << ", " << "EarthlyBranch : " << s.mEarthlyBranch << ", Cycle of " << s.mEarthlyBranch << " : " << static_cast<int>(s.mNEarthlyBranchCycle) << std::endl;
    
    return out;
}
