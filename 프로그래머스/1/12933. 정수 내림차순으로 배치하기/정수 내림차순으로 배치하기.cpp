#include <string>
#include <vector>
#include <cmath>

using namespace std;

void swap(int* a, int* b)
{
    if(*a < *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}


long long solution(long long n) {
    long long answer = 0;
    vector<int> numbers;
    string length = to_string(n);
    for(int i = 0; i < length.size(); i++)
    {
        numbers.push_back(n%10);
        n /= 10;
    }
    while (true)
    {
        vector temp = numbers;
        for(int i = 1; i < numbers.size(); i++)
        {
            swap(&numbers[i-1] , &numbers[i]);
        }
        if(temp == numbers) break;
    }
  
    
    for(int i = 0; i < numbers.size(); i++)
    {
        answer += numbers[i] * pow(10,numbers.size()-1-i);
    }
    
    return answer;
}