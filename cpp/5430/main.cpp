#include <iostream>
#include <deque>
#include <string>
#include <vector>

using namespace std;

int T;

string p;
int n;
string arr_str;



vector<string> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        deque<int> arr;

        bool reversed = false;

        cin >> p >> n >> arr_str;

        int buf = 0;

        for(int j = 1; j < arr_str.size() - 1; j++){
            if(arr_str[j] == ','){
                arr.push_back(buf);
                buf = 0;
            } else {
                buf *= 10;
                buf += arr_str[j] - '0';
            }
        }
        if(buf > 0) arr.push_back(buf);

        string t;

        for(int j = 0; j < p.size(); j++){
            if(p[j] == 'R'){
                reversed = !reversed;
            } else {
                if(arr.empty()){
                    t = "error";
                    break;
                } else {
                    if(reversed) arr.pop_back();
                    else arr.pop_front();
                }
            }
        }

        if(t != "error"){
            t += "[";
            if(!arr.empty()){
                if(reversed){
                    t += to_string(arr.back());
                    arr.pop_back();
                    while(!arr.empty()){
                        t += "," + to_string(arr.back());
                        arr.pop_back();
                    }
                } else {
                    t += to_string(arr.front());
                    arr.pop_front();
                    while(!arr.empty()){
                        t += "," + to_string(arr.front());
                        arr.pop_front();
                    }
                }
            }
            t += "]";
        }

        res.push_back(t);
    }

    for(string t: res) cout << t << '\n';

    return 0;
}
