#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> candidate;
    for(int i = 0; i < score.size(); ++i)
    {
        if(i < k)
        {
            candidate.push_back(score[i]);
            sort(candidate.begin(),candidate.end());
        }
        else
        {
            if(score[i] > candidate[0])
            {
                candidate[0] = score[i];
                sort(candidate.begin(),candidate.end());
            }
        }
        answer.push_back(candidate[0]);
    }
    
    return answer;
}