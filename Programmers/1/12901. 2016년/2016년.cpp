#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> dow = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int tday = 0;
    for(int i = 0; i < a-1; i++)
    {
        tday += days[i];
    }
    tday += b;
    answer = dow[tday%7];

    return answer;
}