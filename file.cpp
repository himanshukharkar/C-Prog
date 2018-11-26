#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f;
    f.open("filehand.txt");
    f<<"kaise ho bro";
    f.close();
    return 0;
}