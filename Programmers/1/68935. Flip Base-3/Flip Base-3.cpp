#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> tnum;
    while( n > 0)
    {
        tnum.push_back(n%3);
        n /= 3;
    }
    
    reverse(tnum.begin(),tnum.end());
    
    
    for(int i = 0; i < tnum.size(); i++)
    {
        answer += tnum[i] * pow(3,i);
    }
        
    return answer;
}