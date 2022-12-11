#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char cource[67],
        target[67];
    char ch;
    cout << endl
         << "Enter source filename: ";
    cin >> cource;
    cout << endl
         << "Enter target filename: ";
    cin >> target;
    ifstream infile(cource);
    ofstream outfile(target);
    while (infile)
    {
        infile.get(ch);
        outfile.put(ch);
    }
    return 0;
}
