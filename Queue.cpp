#include<iostream>
#include<queue>

using namespace std;

void show(queue <string> queuetemp)
{
    while(!queuetemp.empty())
    {
        cout<<queuetemp.front()<<endl;
        queuetemp.pop();
    }

}

int main()
{

    queue <string> q;
    q.push("Shohan");
    q.push("Morol");
    q.push("Sultan");


    //q.pop();
    //q.pop();

    //cout<<q.size()<<endl;
    //cout<<q.front()<<endl;
    //cout<<q.back()<<endl;
    //cout<<q.empty();

    show(q);
    return 0;
}
