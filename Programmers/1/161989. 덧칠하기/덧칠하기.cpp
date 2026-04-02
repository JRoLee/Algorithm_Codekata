#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int finSec = 0;
    for(int i = 0; i < section.size(); ++i)
    {
        if( finSec < section[i] )
        {
            finSec = section[i]+(m-1);
            answer++;
        
            if(finSec >= section.back())
            {
                break;
            }
        }
    }
    
    
    return answer;
}