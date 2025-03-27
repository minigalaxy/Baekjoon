#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cout << R"( @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
    @ @    
     @     
)";
    }
    
    return 0;
}
