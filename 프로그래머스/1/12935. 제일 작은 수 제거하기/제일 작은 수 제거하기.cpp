#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int MinNum = arr[0];
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < MinNum)
        {
            MinNum = arr[i];
        }
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != MinNum)
        {
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.empty())
    {
        return {-1};
    }
    
    return answer;
}