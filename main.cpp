#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;



struct employee {
    char Employee_ID[13]; //primarykey
    char Dept_ID[30]; //sec.key
    char Employee_Name[50];
    char Employee_Position[50];
};
struct department {
    char Dept_ID[30]; //primarykey
    char Dept_Name[50]; //sec.Key
    char Dept_Manager[50];
};

int mySize(char array[]){
    int i=0;
    while (array[i]){

    }
}
void AddEmployee(fstream file) {
    employee e1; string input ="";
    cout << "Enter employee ID: ";
    cin >> e1.Employee_ID;
    cout << "Enter employee Dept_ID: ";
    cin >> e1.Dept_ID;
    cout << "Enter employee name: ";
    cin >> e1.Employee_Name;
    cout << "Enter employee position: ";
    cin >> e1.Employee_Position;

    input=input+e1.Employee_ID+' ';
    input=input+e1.Dept_ID+' ';
    input=input+e1.Employee_Name+' ';
    input=input+e1.Employee_Position+' ';
    int i = input.size();
    char record_Length[2] = {static_cast<char>(i)};

    file<<record_Length;
    file<<e1.Employee_ID;
    file<<' ';
    file<<e1.Dept_ID;
    file<<' ';
    file<<e1.Employee_Name;
    file<<' ';
    file<<e1.Employee_Position;
    file<<' ';




}

int main() {
    ofstream employeeFile("employeeFile.txt");
    //employeeFile.open("employeeFile.txt");
    fstream departmentFile;
    employeeFile.open("departmentFile.txt", ios::app | ios::in | ios::out);

    int option;

    do {
        cout << "Available Options:\n\n";
        cout << "Add New Employee         (1)\n";
        cout << "Add New Department       (2)\n";
        cout << "Delete Employee(ID)      (3)\n";
        cout << "Delete Department(ID)    (4)\n";
        cout << "print Employee(ID)       (5)\n";
        cout << "print Employee(Dept_ID)  (6)\n";
        cout << "print Department(ID)     (7)\n";
        cout << "print Department(name)   (8)\n";
        cout << "Write a Query            (9)\n";
        cout << "Exit                     (10)\n";

        cout << "select option >>";

        // Input Options

        cin >> option;

        // Call function on the bases of the
        // above option
        if (option == 1) {
            cout << "Add new employee >>";
            employee e1 ; string input ="";
            cout << "Enter employee ID: ";
            cin >> e1.Employee_ID;
            cout << "Enter employee Dept_ID: ";
            cin >> e1.Dept_ID;
            cout << "Enter employee name: ";
            cin >> e1.Employee_Name;
            cout << "Enter employee position: ";
            cin >> e1.Employee_Position;

            input=input+e1.Employee_ID+' ';
            input=input+e1.Dept_ID+' ';
            input=input+e1.Employee_Name+' ';
            input=input+e1.Employee_Position+' ';
            int i = input.size();
            char record_Length[2] = {static_cast<char>(i)};

            employeeFile<<record_Length;
            employeeFile<<input;
         /*   employeeFile<<e1.Employee_ID;
            employeeFile<<' ';
            employeeFile<<e1.Dept_ID;
            employeeFile<<' ';
            employeeFile<<e1.Employee_Name;
            employeeFile<<' ';
            employeeFile<<e1.Employee_Position;
            employeeFile<<' ';
            employeeFile.close();*/



        } else if (option == 2) {

        } else if (option == 3) {


        } else if (option == 4) {

        } else if (option == 5) {

        } else if (option == 6) {

        } else if (option == 7) {

        } else if (option == 8) {

        } else if (option == 9) {

        } else {
            cout << "Expected Options"
                 << " are 1/2/3/4/5/6/7/8/9/10";
        }
    } while (option != 10);

   // employeeFile.close();
    departmentFile.close();

    cout << "Exit....Saving to file" << endl;
    return 0;
}