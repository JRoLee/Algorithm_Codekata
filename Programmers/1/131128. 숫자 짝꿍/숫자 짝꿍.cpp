#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    int countX[10] = {0};
    int countY[10] = {0};
    
    for(auto c : X)
    {
        countX[c - '0']++;
    }
    for(auto c : Y)
    {
        countY[c - '0']++;
    }
    
    for (int i = 9; i >= 0; i--)
    {
        int num = min(countX[i], countY[i]);
        for(int j = 0; j < num; j++)
        {
            answer += to_string(i);
        }
    }
    
    if (answer == "") return "-1";
    if (answer[0] == '0') return "0";
    
    
    return answer;
}