#include<bits/stdc++.h>
using namespace std;
class Batsman
{
private:
    int jerseyNo;
    string name;
    int runs;
public:
    int setJerseyNo(int j)
    {
        jerseyNo=j;
    }
    string setName(string n)
    {
        name=n;
    }
    int setRuns(int r)
    {
        runs=r;
    }
    int getJerseyNo()
    {
        return jerseyNo;
    }
    string getName()
    {
        return name;
    }
    int getRuns()
    {
        return runs;
    }
    void BatsmanChecker()
    {
        cout<<"Batsman Jersey No: "<<getJerseyNo()<<endl;
        cout<<"Batsman Name: "<<getName()<<endl;
        cout<<"Batsman Run: "<<getRuns()<<endl;
        cout<<"Batsman Class: ";
        if(runs>5000)
            cout<<"Grade A Batsman"<<endl;
        else
            cout<<"Grade B Batsman"<<endl;
    }

};

int main()
{
    Batsman ob[5];
    for(int i=0;i<5;i++)
    {
        int j_no;
        string n;
        int r;
        cout<<"Enter the Jersey No. of the Batsman: ";
        cin>>j_no;
        cout<<"Enter the Name of the Batsman: ";
        cin>>n;
        cout<<"Enter the Runs scored by the Batsman: ";
        cin>>r;
        ob[i].setJerseyNo(j_no);
        ob[i].setName(n);
        ob[i].setRuns(r);
        cout<<endl;
    }

    for(int i=0;i<5;i++)
    {
        ob[i].BatsmanChecker();
        cout<<endl;
    }
}
