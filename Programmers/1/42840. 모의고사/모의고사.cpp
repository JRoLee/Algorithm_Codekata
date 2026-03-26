#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = {1,2,3,4,5};
    int g1 = 0;
    vector<int> p2 = {2,1,2,3,2,4,2,5};
    int g2 = 0;
    vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};
    int g3 = 0;
    
    for(int i = 0; i < answers.size(); ++i)
    {
        if( answers[i] == p1[i%5])
        {
            g1++;
        }
        
        if( answers[i] == p2[i%8])
        {
            g2++;
        }
        
        if( answers[i] == p3[i%10])
        {
            g3++;
        }
        
    }
    
    int mg = max({g1,g2,g3});
    
    if(g1 == mg)
    {
        answer.push_back(1);
    }
     
    if(g2 == mg)
    {
        answer.push_back(2);
    }
    
    if(g3 == mg)
    {
        answer.push_back(3);
    }
    
    return answer;
}