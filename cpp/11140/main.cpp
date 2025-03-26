#include <iostream>
#include <string>

using namespace std;

int T;

string str;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        int res = 3;

        cin >> str;

        for(int j = 0; j < str.size(); j++){
            if(str[j] == 'l'){
                res = min(res, 2);

                if(j + 1 < str.size()){
                    if(str[j + 1] == 'l'){
                        res = min(res, 1);
                    } else if(str[j + 1] == 'o'){
                        res = min(res, 1);

                        if(j + 2 < str.size()){
                            if(str[j + 2] == 'l'){
                                res = 0;
                                break;
                            }
                        }
                    }
                }
                if(j + 2 < str.size()){
                    if(str[j + 2] == 'l'){
                        res = min(res , 1);
                    }
                }
            } else if(str[j] == 'o'){
                res = min(res, 2);

                if(j + 1 < str.size()){
                    if(str[j + 1] == 'l'){
                        res = min(res, 1);
                    }
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}
