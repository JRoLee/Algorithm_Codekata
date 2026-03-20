#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(true)
    {
        int tempAnswer = answer;
        int nBottle = (n/a) * b;
        
        answer += nBottle;
        
        n = n - (n/a) * a + nBottle;
        if(tempAnswer == answer)
        {
            break;
        }
    }
    
    return answer;
}