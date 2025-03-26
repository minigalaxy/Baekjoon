#include <iostream>
#include <string>

using namespace std;

int N;

int main()
{
    cin >> N;

/*  기존의 브루트포스 방식(참고할 사람은 참고 바람)

    int n = 666;
    int t = N;

    while(t > 1){
        n++;

        if(to_string(n).find("666") != string::npos) t--;
    }

    cout << n << endl;

**/

//문자열 앞뒤 추가 방식

    int f[3] = { 0, }, b[3] = { 0, };
    int fl = 1, bl = 0;

    for(int i = 1; i < N; i++){

        if(bl > 0){
            b[bl - 1]++;

            for(int j = bl - 1; j > -1; j--){
                if(b[j] == 10){
                    b[j] = 0;

                    if(j == 0){
                        fl += bl;
                        bl = 0;

                        f[3 - fl]++;
                    }
                    else b[j - 1]++;
                }
            }
        } else {
            f[2]++;

            for(int j = 2; j > 2 - fl; j--){
                if(f[j] == 10){
                    f[j] = 0;
                    f[j - 1]++;
                }
            }
        }
        for(int j = 2; j > 2 - fl; j--){
            if(f[j] == 6){
                fl--;
                bl++;
            } else break;
        }
        string r;

        for(int i = 0; i < 3; i++){
            if(i > 2 - fl) r.push_back(f[i] + '0');
        }
        r += "666";
        for(int i = 0; i < 3; i++){
            if(i < bl) r.push_back(b[i] + '0');
        }

        cout << r << ' ' << fl << ' '<< bl << endl;

        cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ" << endl;
    }



    return 0;
}
