#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[30];
    cin.getline(str, 30);
    cout << (str[0] == 'A' ? strlwr(str) : str) << endl;
    return 0;
}