#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> minkey(26,200);
 
    for (const auto& key : keymap)
    {
        for(int i = 0; i <key.size(); i++)
        {
            int idx = key[i] - 'A';
            minkey[idx] = min(minkey[idx], i+1);
        }
    }
    
    for(const auto& target : targets)
    {
        int tpress = 0;
        bool possible = true;
        
        for ( char c : target)
        {
            int press = minkey[c - 'A'];
            
            if(press == 200)
            {
                possible = false;
                break;
            }
            tpress += press;        
        }
        
        if (!possible) answer.push_back(-1);
        else answer.push_back(tpress);
        
    }
    return answer;
}