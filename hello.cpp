#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<string> msg {"Hello2", "C++", "from", "VS Code! (centOS7)"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}