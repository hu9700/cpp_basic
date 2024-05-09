#include <iostream>
#include <string>
#include <sstream>

#include <stdio.h>

using namespace std;

int main(int argc, char **argv)
{
    string input_s("User1 User2 400");
    stringstream input_stream(input_s);

    string u1;
    string u2;
    string num_s;
    int num;

    getline(input_stream, u1, ' ');
    getline(input_stream, u2, ' ');
    getline(input_stream, num_s, ' ');
    
    num = stod(num_s);

    cout << "u1:" << u1 << "\n";
    cout << "u2:" << u2 << "\n";
    //cout << "num:" << num_s << endl;
    cout << "num:" << num << endl;

    return 0;
}