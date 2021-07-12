#include <iostream>
#include <fstream>

using namespace std; 

int main()
{

    ofstream file("test.bin", ios::binary);

    int p = 1023;

    cout << "The value in p before reading is: " << p;

    file.write((char *)&p, sizeof(p));
    
    file.close();

    cout << "The value in p after reading is: " << p; 
}

