#include <iostream>
#include <string>

using namespace std;
string name;

void GetName()
{
    cin>>name;
}
int main()
{
    GetName();
    cout << "Guten Morgen, " << name << "!" << endl;
    return 0;
}
