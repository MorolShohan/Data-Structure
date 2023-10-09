#include<iostream>
using namespace std;
void display(double arr[], int size)
{
    cout<<"------Printing 10 students cgpa------"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<(i+1)<<"th students cgpa : "<<arr[i]<<endl;
    }
}

void checking(double arr[], int size)
{
    cout<<"------Checking eligibilty------"<<endl;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>3.75)
        {
            cout<<(i+1)<<" th student Eligible for scholarship"<<endl;
        }
        else
        {
            cout<<(i+1)<<" th student Not eligible for scholarship"<<endl;
        }
    }
}

void total(double arr[],int size)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>3.75)
        {
            count++;
        }
    }
    cout<<"Total number of students for scholarship : "<<count<<endl;
}
int main()
{
    double students[10]={3.76, 3.82, 3.33, 3.85, 3.22,
                        3.10, 3.52, 3.62, 3.72, 3.60};

    int size = sizeof(students)/sizeof(students[0]);

    display(students, size);

    cout<<endl;

    checking(students, size);

    cout<<endl;

    total(students, size);

    return 0;
}
