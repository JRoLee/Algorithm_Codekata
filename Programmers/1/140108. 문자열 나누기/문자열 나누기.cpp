#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    
    for (int i = 0; i < s.length();)
    {
        int same = 0;
        int diff = 0;
        for(int j = i; j < s.length(); j++)
        {
            if(s[i] == s[j])
            {
                same++;
            }
            else
            {
                diff++;
            }
            
            if(same == diff)
            {
                answer++;
                i = j + 1;
                break;
            }
            
            if(j == s.length() - 1)
            {
                answer++;
                i = j + 1;
                break;
            }
            
        }
    }
    
    return answer;
}