#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(auto subString : s)
    {
        if(subString == ' ')
        {
            answer += subString;
            continue;
        }
    
        if( subString >= 'a')
        {
            answer += (subString - 'a' + n) % 26 + 'a';
        }
        else
        {
            answer += (subString - 'A' + n) % 26 + 'A';
        }
    }
    
    return answer;
}