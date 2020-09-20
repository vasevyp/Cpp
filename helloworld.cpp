#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello",  "World", "from", "VS Code," ,"it is the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}


using namespace std;
int main()
{
    long x, a;
    cin >> a;
    for (int i =31; i>=0; i--
    {
        x = ((a >> i) & 1);
        cout << x << ' ';
    }
    cout << endl;
    return 0;

}
