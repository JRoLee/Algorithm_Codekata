#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    while (goal.size() > 0)
    {
        if(goal[0] == cards1[0])
        {
            goal.erase(goal.begin());
            cards1.erase(cards1.begin());
            answer = "Yes";
            continue;
        }
        
        if(goal[0] == cards2[0])
        {
            goal.erase(goal.begin());
            cards2.erase(cards2.begin());
            answer = "Yes";
            continue;
        }
        
        answer = "No";
        break;
        
    }
    
    return answer;
}