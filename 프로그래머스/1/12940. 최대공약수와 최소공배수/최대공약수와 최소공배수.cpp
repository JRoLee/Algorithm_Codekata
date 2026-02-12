#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n > m ? n : m;
    int b = n > m ? m : n;
    while (true)
    {
        int temp = b;
        b = a % b;
        a = temp;
        if(b == 0)
        {
            answer.push_back(a);
            break;
        }
    }
    answer.push_back(n*m/answer[0]);
        
    return answer;
}