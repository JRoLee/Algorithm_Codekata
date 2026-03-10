#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(s[0] == '-')
    {
        for (int i = 1; i<s.size(); i++)
        {
            answer -= (int)(s[i]-'0') * pow(10,(s.size() -1 -i));
        }
    }
    else if(s[0] == '+')
    {
        for (int i = 1; i<s.size(); i++)
        {
            answer += (int)(s[i]-'0') * pow(10,(s.size() -1 -i));
        }
    }
    else
    {
        for (int i = 0; i<s.size(); i++)
        {
            answer += (int)(s[i]-'0') * pow(10,(s.size() -1 -i));
        }
    }
    
    return answer;
}