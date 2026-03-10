using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long reqmoney = 0;
    for(int i = 1; i <= count; i++)
    {
        reqmoney += i * price;
    }
    answer = (reqmoney - money) < 0 ? 0 : (reqmoney - money);

    return answer;
}