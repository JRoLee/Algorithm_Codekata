#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for (int i = 0; i < s.size(); i++)
    {
        int found  = -1;
        for (int j = i - 1; j >= 0; j--)
        {
            if(s[j] == s[i])
            {
                found = i - j;
                break;
            }
        }
        answer.push_back(found);
    }
    return answer;
}
