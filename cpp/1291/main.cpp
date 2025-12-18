#include <iostream>

using namespace std;

int N;

bool is_a(int n){
    if(n >= 4 && n != 5){
        int sum = 0;
        
        while(n){
            sum += n % 10;
            n /= 10;
        }
        
        return (sum % 2 == 1);
    }
    else return false;
}

bool is_b(int n){
    if(n == 4 || n == 2) return true;
    if(n == 1) return false;
    
    int sum = 0;
    
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            sum++;
            
            while(n % i == 0) n /= i;
        }
    }
    
    return (sum % 2 == 0);
}

int main()
{
    cin >> N;
    
    if(is_a(N) && is_b(N)) cout << 4;
    else if(is_a(N)) cout << 1;
    else if(is_b(N)) cout << 2;
    else cout << 3;
    
    return 0;
}
