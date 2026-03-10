#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float divide = (float)num1/(float)num2;
    answer = divide*1000;
    return answer;
}