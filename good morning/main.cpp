#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
string name;
string text;

void GetName()
{
    cin>>name;
    if(name == "-"){
        name = "my friend";
    }
    cout<<"\n\n\n"<<endl;
}
void Mexico()
{
    for(int i=0;i<80;++i)
    {
        cout<<"#";
    }
}
void String()
{
    text = "Happy Eastern, " + name + "!";
}
void centerstring()
{
    int l = text.length();
    int FrontSpaces = (76 - l)/2;
    cout<<"##";
    for(int i=0; i<FrontSpaces;i++)
    {
        cout<<" ";
    }
    cout<<text;
    for(int i=0; i<FrontSpaces;i++)
    {
        cout<<" ";
    }
    cout<<"##";

}

void Hungary()
{
    cout<<"##";
    for(int i=0;i<76;i++)
    {
        cout<<" ";
    }
    cout<<"##";
}
int main()
{
    GetName();
    String();
    Mexico();
    Mexico();
    Hungary();
    centerstring();
    Hungary();
    Mexico();
    Mexico();
    cout<<"\n\n\n"<<endl;
    return 0;
}
