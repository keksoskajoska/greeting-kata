#include <iostream>
#include <string>

using namespace std;
string name;

void GetName()
{
    cin>>name;
}
void Cout()
{
    cout << "Happy Eastern, " << name << "!" << endl;
}
int main()
{
    GetName();
    Cout();
    return 0;
}
