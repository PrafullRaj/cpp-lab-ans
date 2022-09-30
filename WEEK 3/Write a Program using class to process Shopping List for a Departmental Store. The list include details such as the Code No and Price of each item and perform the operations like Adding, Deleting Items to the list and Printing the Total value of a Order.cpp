#include <iostream>
using namespace std;
const int m = 50;
class shoppinglist
{
    int scode[m];
    int sprice[m];
    int count = 0;

public:
    void getproduct()
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "\nenter the code of product\n";
            cin >> scode[count];
            cout << "\nenter the price of product\n";
            cin >> sprice[count];
            count++;
        }
    }
    void display()
    {
        cout << "\ndisplaying data\n";
        for (int i = 0; i <= count - 1; i++)
        {
            cout << "\ncode of the product is\n"
                 << scode[i] << "\n";
            cout << "\nprice of the product is\n"
                 << sprice[i] << "\n";
        }
    }
    void sum()
    {
        int summ = 0;
        for (int i = 0; i <= count - 1; i++)
        {
            summ = summ + sprice[i];
        }
        cout << summ;
    }
    void re()
    {
        int code, i, temp;
        cout << "\nenter the product code to remove the item\n";
        cin >> code;
        for (i = 0; i <= count - 1; i++)
        {
            if (code == scode[i])
            {
                cout << "\nproduct found\n";
                scode[i] = 0;
                sprice[i] = 0;
                cout << "\nproduct removed\n";
                break;
            }
        }
    }
};

int main()
{
    shoppinglist s;
    int ch;
    do
    {
        int choice;
        cout << "\n         Welcome to the shopping list\n";
        cout << "\n PRESS 1 FOR ENTER THE PRODUCT DATA\n";
        cout << "\n PRESSS 2 FOR TO DISPLAY THE DATA\n";
        cout << "\n PRESS 3 FOR SUM OF THE TOTAL PRICE\n";
        cout << "\n PRESS 4 TO REMOVE THE DATA \n";
        cout << "\n ENTER YOUR CHOICE\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "\n*PRODUCT DATA*\n";
            s.getproduct();
        }
        else if (choice == 2)
        {
            cout << "\n*DISPLAYING DATA*\n";
            s.display();
        }
        else if (choice == 3)
        {
            cout << "**\nTOTAL PRCIES\n";
            s.sum();
        }
        else if (choice == 4)
        {
            cout << "\n*REMOVE THE DATA*\n";
            s.re();
        }
        else
        {
            cout << "\nincorrect input\n";
        }
        cout << "\npress 5 to continue else press anything\n";
        cin >> ch;
    } while (ch == 5);
}
