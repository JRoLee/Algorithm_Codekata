#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int gap = 0;
    int hit = 0;

    for(int i = 0; i < win_nums.size(); i++)
    {
        if(lottos[i] == 0)
        {
            gap++;
        }
        
        auto it = find(lottos.begin(), lottos.end(), win_nums[i]);
        if( it != lottos.end())
        {
            hit++;
        }
    }
    
    if(gap + hit >=6)
    {
        answer.push_back(1);
    }
    else if (gap + hit >= 5)
    {
        answer.push_back(2);
    }
    else if (gap + hit >= 4)
    {
        answer.push_back(3);
    }
    else if (gap + hit >= 3)
    {
        answer.push_back(4);
    }
    else if (gap + hit >= 2)
    {
        answer.push_back(5);
    }
    else
    {
        answer.push_back(6);
    }
    
    
    if(hit >=6)
    {
        answer.push_back(1);
    }
    else if (hit >= 5)
    {
        answer.push_back(2);
    }
    else if (hit >= 4)
    {
        answer.push_back(3);
    }
    else if (hit >= 3)
    {
        answer.push_back(4);
    }
    else if (hit >= 2)
    {
        answer.push_back(5);
    }
    else
    {
        answer.push_back(6);
    }
    
    return answer;
}