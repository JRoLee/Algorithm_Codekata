#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int wordcount = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        int latterindex = i - wordcount;
        if(s[i] == ' ')
        {
            wordcount = i + 1;
            answer.push_back(s[i]);
            continue;
        }
        
        if( latterindex % 2 == 0 )
        {
             answer.push_back(toupper(s[i]));
        }
        else
        {
            answer.push_back(tolower(s[i]));
        }
       
    }
    
    return answer;
}