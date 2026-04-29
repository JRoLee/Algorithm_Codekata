#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<int> skipChars(26,0);

    for(const char& c : skip)
    {
        int skipChar = c - 'a';
        skipChars[skipChar] ++;
    }
    
    for (const char& c : s)
    {
        int currentChar = c - 'a';
        int add = 0;
        
        while (add < index)
        {
            currentChar = (currentChar + 1) % 26;
            if(skipChars[currentChar] == 0)
            {
                add++;
            }
        }
        
        answer += currentChar + 'a';
    }
    
    return answer;
}