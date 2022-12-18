#include <iostream>
#include <sstream>
#include <vector>
#include <numeric>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    istringstream ist(str);

    vector<signed> vec;
    for (signed temp; ist >> temp;)
        vec.push_back(temp);

    cout
        << boolalpha
        << (to_string(accumulate(vec.cbegin(), vec.cend(), 0)).size() == 2)
        << endl;

    system("pause");
}