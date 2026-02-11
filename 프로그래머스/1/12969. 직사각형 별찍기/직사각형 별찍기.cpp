#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    string c;
    string d;
    
    for(int i = 0; i < a; i++)
    {
        c += '*';
    }
    for(int i = 0; i< b; i++)
    {
        cout << c << endl;
    }
    
    return 0;
}