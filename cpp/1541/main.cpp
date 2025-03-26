#include <iostream>
#include <vector>

using namespace std;

vector<int> nums;
vector<bool> opers;

int res = 0;

int main()
{
    opers.push_back(true);

    char c;
    int buf = 0;

    while(true){
        c = getchar();

        if(c == '\n'){
            nums.push_back(buf);
            break;
        }

        if(c == '+' && opers.back()){
            opers.push_back(true);
            nums.push_back(buf);
            buf = 0;
        } else if(c == '+' || c == '-'){
            opers.push_back(false);
            nums.push_back(buf);
            buf = 0;
        } else {
            buf *= 10;
            buf += c - '0';
        }
    }

    res = nums[0];

    for(int i = 1; i < opers.size(); i++) res += (opers[i]) ? nums[i] : -nums[i];

    cout << res;

    return 0;
}
