#include <iostream>
using namespace std;
class matrix
{
    int a[5][5], b[5][5], c[5][5], l, i, j, m, n;

public:
    void read()
    {
        cout << "Enter no. of rows " << endl;
        cin >> m;
        cout << "Enter no. of cols " << endl;
        cin >> n;
        cout << "Enter first matrix elements: " << endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter second matrix elements: " << endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> b[i][j];
            }
        }
    }
    void sum()
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    void display()
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix obj;
    obj.read();
    obj.sum();
    cout << "The addition of two matrices: " << endl;
    obj.display();
    return 1;
}
