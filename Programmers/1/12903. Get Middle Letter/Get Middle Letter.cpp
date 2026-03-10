#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int num = s.size()/2;
    if(s.size() % 2 == 0)
    {
        answer += s[num-1];
        answer += s[num];
    }
    else
    {
        answer += s[num];
    }
    
    return answer;
}