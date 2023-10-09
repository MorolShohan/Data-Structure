#include <iostream>

using namespace std;


struct Student
{

    int id;
    string name;
    float cgpa;
    Student(string n,int i,float c)
    {
        id=i;
        name=n;
        cgpa=c;
    }
    void print()
    {
        cout<<"Id:"<<id<<"\nName:"<<name<<"\nCgpa:"<<cgpa<<endl;
    }
};

int main()
{
    //struct Student s1={11,"def",2.5};
    //struct Student s1("Abc",12,3.5);
//    s1.id=10;
//    s1.name="Abc";
//    s1.cgpa=3.5;
    //cout<<"Id:"<<s1.id<<"\nName:"<<s1.name<<"\nCgpa:"<<s1.cgpa<<endl;
    //s1.print();

    //Array of objects
//    Student students[2];
//    struct Student s1={11,"def",2.5};
//    struct Student s2={12,"abc",3.5};
//    students[0]=s1;
//    students[1]=s2;
    //students[1].print();
    Student students[2]={
                            Student("def",11,2.5),
                            Student("abc",12,3.5)
                        };
    int size=sizeof(students)/sizeof(students[0]);
    for(int i=0;i<size;i++)
    {
        if(students[i].cgpa>3.0)
        students[i].print();
    }
    return 0;
}
