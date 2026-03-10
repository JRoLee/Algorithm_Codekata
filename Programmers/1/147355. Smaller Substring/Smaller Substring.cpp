#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    long long intp = stoll(p);
    
    for(int i = 0 ; i < t.size() - p.size()+1; i++)
    {
        string partt;
        for(int j = 0; j < p.size(); j++)
        {
            partt.push_back(t[i+j]);
        }
        if(intp >= stoll(partt))
        {
            answer++;
        }
    }
    
    return answer;
}