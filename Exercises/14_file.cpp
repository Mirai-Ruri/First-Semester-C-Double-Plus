#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream MyFile("D:\\School\\First Year\\MyFile Ofstream.txt");
    MyFile << "Apple\n";
    MyFile << "Orange\n";
    MyFile << "Strawberry\n";
    MyFile.close();
    cout << "\nFile created successfully.\n";

    string myText;
    ifstream MyReadFile("D:\\School\\First Year\\MyFile Ofstream.txt");
    while (getline (MyReadFile, myText))
    {
        cout << myText << endl;
    }

    return 0;
}