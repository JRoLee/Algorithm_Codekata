#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long lnum = num ;
    for(answer; answer <= 500; answer++)
    {
        if(lnum < 2) break;
        if(lnum % 2 == 0)
        {
            lnum /= 2;
        }
        else
        {
            lnum = lnum*3 + 1;
        }
    }
    if (answer >= 500)
    {
        answer = -1;
    }
    return answer;
}