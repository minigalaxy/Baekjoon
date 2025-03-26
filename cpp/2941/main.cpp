#include <iostream>
#include <string>
#include <set>

using namespace std;

int res = 0;

string word;

int main()
{
    cin >> word;

    for(int i = 0; i < word.size(); i++){
        if(word.substr(i, 3) == "dz="){
            res++;
            i += 2;
        } else if(word.substr(i, 2) == "c=" ||
                   word.substr(i, 2) == "c-" ||
                   word.substr(i, 2) == "d-" ||
                   word.substr(i, 2) == "lj" ||
                   word.substr(i, 2) == "nj" ||
                   word.substr(i, 2) == "s=" ||
                   word.substr(i, 2) == "z="){
            res++;
            i++;
        } else res++;
    }

    cout << res;

    return 0;
}
