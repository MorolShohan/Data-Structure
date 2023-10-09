#include <iostream>

using namespace std;

struct Student{
    int id;
    float cgpa;
    int credit;
};

int main(){
    Student student[10];

    for(int i=0; i<10; i++){
        cout<<"Enter the Id: ";
        cin>>student[i].id;
        cout<<"Enter the CGPA: ";
        cin>>student[i].cgpa;
        cout<<"Enter the credits: ";
        cin>>student[i].credit;
        cout<<endl;
        cout<<endl;
    }
    for(int i=0; i<10; i++){
        if(student[i].cgpa>3.75 && student[i].credit>50){
            cout<<"Student Id: "<<student[i].id<<" CGPA: "<<student[i].cgpa<<" Completed Credits: "<<student[i].credit<<endl;
        }
    }
    return 0;
}



