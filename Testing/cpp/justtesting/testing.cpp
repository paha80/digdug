#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"I'm", "just", "testing", "power of", "VS Code", "and the C++"};

    for (const string & word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
