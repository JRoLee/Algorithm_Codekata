#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(const string& word : babbling)
    {
        bool can = true;
        string prev = "";
        int i = 0;
        
        while(i < word.length())
        {
            if(word.substr(i,3) == "aya" && prev != "aya")
            {
                prev = "aya";
                i += 3;
            }
            else if (word.substr(i,2) == "ye" && prev != "ye")
            {
                prev = "ye";
                i += 2;
            }
            else if (word.substr(i,3) == "woo" && prev != "woo")
            {
                prev = "woo";
                i += 3;                    
            }
            else if (word.substr(i,2) == "ma" && prev != "ma")
            {
                prev = "ma";
                i += 2;
            }
            else
            {
                can = false;
                break;
            }
        }
        if(can == true)
        {
            answer++;
        }
        
    }
    
    return answer;
}