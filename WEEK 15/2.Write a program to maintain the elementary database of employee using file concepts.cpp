#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
class Employee
{
private:
    int code;
    char name[20];
    float salary;

public:
    void read();
    void display();
    int getEmpCode() { return code; }
    int getSalary() { return salary; }
    void uptxteSalary(float s) { salary = s; }
};
void Employee::read()
{
    cout << "Enter employee code: ";
    cin >> code;
    cout << "Enter name: ";
    cin.ignore(1);
    cin.getline(name, 20);
    cout << "Enter salary: ";
    cin >> salary;
}
void Employee::display()
{
    cout << code << " " << name << "\t" << salary << endl;
}
fstream file;
void deleteExistingFile()
{
    remove("EMPLOYEE.txt");
}
void appendToFile()
{
    Employee x;
    x.read();
    file.open("EMPLOYEE.txt", ios::binary | ios::app);
    if (!file)
    {
        cout << "ERROR IN CREATING FILE\n";
        return;
    }
    file.write((char *)&x, sizeof(x));
    file.close();
    cout << "Record added sucessfully.\n";
}
void displayAll()
{
    Employee x;
    file.open("EMPLOYEE.txt", ios::binary | ios::in);
    if (!file)
    {
        cout << "ERROR IN OPENING FILE \n";
        return;
    }
    while (file)
    {
        if (file.read((char *)&x, sizeof(x)))
            if (x.getSalary() >= 10000 && x.getSalary() <= 20000)
                x.display();
    }
    file.close();
}
void insertRecord()
{
    Employee x;
    Employee newEmp;
    newEmp.read();
    fstream fin;
    file.open("EMPLOYEE.txt", ios::binary | ios::in);
    fin.open("TEMP.txt", ios::binary | ios::out);
    if (!file)
    {
        cout << "Error in opening EMPLOYEE.txt file!!!\n";
        return;
    }
    if (!fin)
    {
        cout << "Error in opening TEMP.txt file!!!\n";
        return;
    }
    while (file)
    {
        if (file.read((char *)&x, sizeof(x)))
        {
            if (x.getEmpCode() > newEmp.getEmpCode())
            {
                fin.write((char *)&newEmp, sizeof(newEmp));
            }
            fin.write((char *)&x, sizeof(x));
        }
    }
    fin.close();
    file.close();
    rename("TEMP.txt", "EMPLOYEE.txt");
    remove("TEMP.txt");
    cout << "Record inserted successfully." << endl;
}
int main()
{
    deleteExistingFile();
    int n;
    cout << "ENTER CHOICE\n"
         << "1.ADD AN EMPLOYEE\n"
         << "2.DISPLAY\n"
         << "3.INSERT RECORD\n";
    cout << "Make a choice: ";
    cin >> n;
    switch (n)
    {
    case 1:
        appendToFile();
        break;
    case 2:
        displayAll();
        break;
    case 3:
        insertRecord();
        break;
    default:
        cout << "Invalid Choice\n";
    }
    return 0;
}
