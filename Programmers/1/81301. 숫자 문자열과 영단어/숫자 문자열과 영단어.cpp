#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    string answerS;
    string E;
    map<string, char> wordMap = {
        {"zero",'0'},
        {"one",'1'},
        {"two",'2'},
        {"three",'3'},
        {"four",'4'},
        {"five",'5'},
        {"six",'6'},
        {"seven",'7'},
        {"eight",'8'},
        {"nine",'9'}
    };
    
    for(auto subS : s)
    {
        if(subS <= 57 && subS >= 48)
        {
            answerS += subS;
        }
        else
        {
            E += subS;
            if(wordMap.find(E) != wordMap.end())
            {
                answerS += wordMap[E];
                E = "";
            }
        }
    }
    answer = stoi(answerS);
    
    return answer;
}