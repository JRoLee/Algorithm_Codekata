#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> burger;
    vector<int> comb = {1,2,3,1} ;
    
    for(int in : ingredient)
    {
        burger.push_back(in);
        auto it = search(burger.end()-4,burger.end(),comb.begin(),comb.end());
        if (it != burger.end())
        {
            burger.erase(it,burger.end());
            answer++;
        }
    }
    
    return answer;
}