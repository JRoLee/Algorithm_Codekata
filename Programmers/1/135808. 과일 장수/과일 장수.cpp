#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end());
    
    while (score.size() >= m)
    {
        answer += score [score.size()-m] * m;
        score.erase(score.end()-m, score.end());
    }
    
    return answer;
}