#include<iostream>
using namespace std;

class person
{
public :
    void display()
    {
      cout<< "I am a person"<<endl;
    }

};

class employee : public person //inheritance//
{
public :
   virtual void display()
    {
      cout<< "I am an Employee"<<endl;
    }

};

class student : public person //inheritance//
{
public :
   virtual void display()
    {
      cout<< "I am a Student"<<endl;
    }

};


class TA : public student, public employee //inheritance//
{
public :
    void display()
    {
      cout<< "I am a TA"<<endl;
    }

};

class ScholarshipStudent : public student //inheritance//
{
public :
    void display()
    {
      cout<< "I am a ScholarshipStudent"<<endl;
    }

};

class Faculty : public employee //inheritance//
{
public :
    void display()
    {
      cout<< "I am a Faculty"<<endl;
    }

};
 class Officer : public employee //inheritance//
{
public :
    void display()
    {
      cout<< "I am an Officer"<<endl;
    }

};




   void epu()
   {
        for(int i=0;i>=0;i++)
    {
        cout<<"EPU SORRY..MAAF KORE DE :) "<<endl;
    }
   }

   int main()
   {
       epu();
   }
