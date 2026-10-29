#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream MyFile("");
    MyFile << "Apple";
    MyFile.close();
    cout << "File created successfully.";

    string MyText;
    ifstream MyReadFile("");
    while (getline (MyReadFile, MyText))
    {
        cout << MyText;
    }


    return 0;
}