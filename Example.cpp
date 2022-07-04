#include "SexagenaryCycle.hpp"
using namespace std;

int main()
{
    cout << "HeavenlyStem[GAP, EUL, BYEONG, JEONG, MU, GI, GYEONG, SIN, IM, GYE]\nEarthlyBranch[JA, CHUK, IN, MYO, JIN, SA, O, MI, SIN, YU, SUL, HAE]" << endl << endl;
    
    unsigned short n, m;
    string isHeavenlyStem;
    
again:
    cout << "Enter whether you know the heavenly stem or the earthly branch (H/E) : ";
    cin >> isHeavenlyStem;
    if (isHeavenlyStem == "h" || isHeavenlyStem == "H") {
    again1:
        cout << "Input heavenly stem (1 ~ 10) : ";
        cin >> n;
        if (cin.fail() || !(n >= 1 && n <= 10)) { cin.clear(); cin.ignore(32767, '\n'); cout << "Invalid Value.. Please Try Again.." << endl; goto again1; }
    again2:
        cout << "Input Cycle of heavenly stem (1 ~ 6) : ";
        cin >> m;
        if (cin.fail() || !(m >= 1 && m <= 6)) { cin.clear(); cin.ignore(32767, '\n'); cout << "Invalid Value.. Please Try Again.." << endl; goto again2; }
        cout << endl;
        
        SexagenaryCycle s(n, m, true);
        
        cout << s << endl;
    }
    else if (isHeavenlyStem == "e" || isHeavenlyStem == "E") {
    again3:
        cout << "Input earthly branch (1 ~ 10) : ";
        cin >> n;
        if (cin.fail() || !(n >= 1 && n <= 10)) { cin.clear(); cin.ignore(32767, '\n'); cout << "Invalid Value.. Please Try Again.." << endl; goto again3; }
    again4:
        cout << "Input Cycle of earthly branch (1 ~ 5) : ";
        cin >> m;
        if (cin.fail() || !(m >= 1 && m <= 5)) { cin.clear(); cin.ignore(32767, '\n'); cout << "Invalid Value.. Please Try Again.." << endl; goto again4; }
        cout << endl;
        
        SexagenaryCycle s(n, m, false);
        
        cout << s << endl;
    }
    else {
        cin.clear(); cin.ignore(32767, '\n'); cout << "Invalid Value.. Please Input H or E.." << endl; goto again;
    }
    
    return 0;
}
