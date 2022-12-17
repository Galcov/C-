
#include <iostream>

using namespace std;
int main()
{
    system("chcp 1251");
    string s, s0;
    cin >> s >> s0;
    int pos = s.find(s0);
    while (pos + 1) {
        s.erase(pos, s0.size());
        pos = s.find(s0);
    }
    cout << s;
    return 0;
}