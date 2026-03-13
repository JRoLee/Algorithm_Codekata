#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    
   while(true)
   {
       answer = strings;
       
       for(int i = 1; i < strings.size(); ++i)
       {
           if(strings[i-1][n] > strings[i][n])
           {
               string temp = strings[i-1];
               strings[i-1] = strings[i];
               strings[i] = temp;
           }
           else if (strings[i-1][n] == strings[i][n])
           {
               sort(strings.begin()+i-1, strings.begin()+i+1);
           }
       }
       if(answer == strings)
       {
           break;
       }
   }
    
    
    return answer;
}