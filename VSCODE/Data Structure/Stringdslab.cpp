#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //string name;
    //cout<<"enter a name: ";
    //cin>>name;
    char name[]="Shohan";
    cout<<strlen(name)<<endl;
    //cout<<"you have entered: "<<name;
    for(int i=0;i<strlen(name);i++)
        {
            cout<<(char)(name[i]+2)<<endl;
        }
    return 0;
}