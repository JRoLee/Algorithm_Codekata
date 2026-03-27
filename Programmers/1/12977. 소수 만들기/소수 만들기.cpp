#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for(int i = 0; i < nums.size()-2; i++)
    {
        for(int j = i+1; j < nums.size()-1; j++)
        {
            for(int k = j+1; k < nums.size(); k++)
            {
                int tempNum = nums[i] + nums[j] + nums[k];
                
                bool isPrime = true;
                
                for(int l = 2; l*l <= tempNum; l++)
                {
                    if(tempNum % l == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                
                if(isPrime == true)
                {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}