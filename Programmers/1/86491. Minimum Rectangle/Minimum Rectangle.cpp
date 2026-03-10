#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxW = 0;
    int maxH  = 0;
    for ( auto size : sizes)
    {
        int w = size[0] >= size[1] ? size[0] : size[1];
        int h = size[0] >= size[1] ? size[1] : size[0];
        if (w > maxW) maxW = w;
        if (h > maxH) maxH = h;
    }    
    answer = maxW * maxH;
    return answer;
    
}