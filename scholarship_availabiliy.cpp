#include<iostream>
using namespace std;
void save(double arr[], int size)
{
    cout<<"**** Printing 10 students cgpa ****\n "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<(i+1)<<"th students cgpa : "<<arr[i]<<endl;
    }
}

void scholarship_availability(double arr[],int size)
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
    double students[10]={3.92, 3.45, 3.36, 3.75, 3.21,
                        3.96, 3.52, 3.86, 3.78, 3.61};

    int size = sizeof(students)/sizeof(students[0]);

    save(students, size);

    cout<<endl;

    scholarship_availability(students, size);

    return 0;
}

