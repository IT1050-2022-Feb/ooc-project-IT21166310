#include<iostream>
#include <string>
using namespace std;
//Reminder class
class Reminder{
     protected:
          string name;
          string date;
          string time;

     public:
          Reminder(); //default constructor
          Reminder(string Rname,string Rdate,string Rtime);
          virtual void displayDetails(){
           displayDetails();
        }
};