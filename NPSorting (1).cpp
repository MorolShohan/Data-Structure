#include <iostream>
#define soa 7
using namespace std;

class Student
{
    int id;
    string name;
    double cgpa;

public:

    Student(){}

    Student(int id, string name, double cgpa)
    {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
    }

    void setId(int id){this->id = id;}
    void setName(string name){this->name = name;}
    void setCgpa(double cgpa){this->cgpa = cgpa;}

    int getId(){return id;}
    string getName(){return name;}
    double getCgpa(){return cgpa;}

    void showDetails()
    {
        cout<<"Student ID: "<<id<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student CGPA: "<<cgpa<<endl;
        cout<<endl;
    }
};


void inputArray(Student listOfStudents[])
{
    for(int i=0; i<soa; i++)
    {
        int id;
        string name;
        double cgpa;

        cout<<"----------------------------------"<<endl;

        cout<<"Enter Student "<<i+1<<" ID: ";
        cin>>id;
        listOfStudents[i].setId(id);

        cout<<"Enter Student "<<i+1<<" Name: ";
        cin>>name;
        listOfStudents[i].setName(name);

        cout<<"Enter Student "<<i+1<<" CGPA: ";
        cin>>cgpa;
        listOfStudents[i].setCgpa(cgpa);
    }
}

void printArray(Student listOfStudents[])
{
    cout<<endl<<"### List of Students ###"<<endl;
    for(int i = 0; i<soa; i++)
    {
        listOfStudents[i].showDetails();
    }
    cout<<endl;
}


void bubbleSort(Student lisOfStudents[])
{
    for(int starting_index = 0; starting_index<soa-1; starting_index++)
    {
        for(int current_index = 0; current_index<(soa-1)-starting_index; current_index++)
        {
            if(lisOfStudents[current_index].getCgpa() > lisOfStudents[current_index+1].getCgpa())
            {
                Student temp = lisOfStudents[current_index];
                lisOfStudents[current_index] = lisOfStudents[current_index+1];
                lisOfStudents[current_index+1] = temp;
            }
        }
    }
}


int main()
{
    Student listOfStudents[soa];

    inputArray(listOfStudents);
    printArray(listOfStudents);

    bubbleSort(listOfStudents);
    printArray(listOfStudents);
}
