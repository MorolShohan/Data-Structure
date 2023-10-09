#include<iostream>
using namespace std;

int main()
{
    int x,y,small;

    cout<<"Enter two numbers :"<<endl;
    scanf("%d %d",&x,&y);
    if(x<y)
        small=x;
    else
        small=y;

    cout<<("Minimum of the two number is :", small)<<endl;
    return 0;
}
