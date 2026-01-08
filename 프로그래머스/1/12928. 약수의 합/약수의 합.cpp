#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> nums;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            nums.push_back(i);
        }
    }
    for(auto divisor:nums)
    {
        answer += divisor;
    }
    
    return answer;
}