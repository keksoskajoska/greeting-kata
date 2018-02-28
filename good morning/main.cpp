#include <iostream>
#include <string>

using namespace std;
string name;

void GetName()
{
    cin>>name;
    cout<<"\n\n\n"<<endl;
}
void Cout()
{
    cout << "\nHappy Eastern, " << name << "!" << endl;
}
void Mexico()
{
    for(int i=0;i<81;++i)
    {
        cout<<"*";
    }
}
int main()
{
    GetName();
    Mexico();
    Cout();
    Mexico();
    cout<<"\n\n\n"<<endl;
    return 0;
}
