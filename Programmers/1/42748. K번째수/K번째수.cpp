#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> inArray = array;
    int i, j, k;
    
    for (auto command : commands)
    {
        i = command [0];
        j = command [1];
        k = command [2];
        sort(inArray.begin()+i-1, inArray.begin()+j);
        answer.push_back(inArray[i+k-2]);
        inArray = array;
    }
    
    return answer;
}