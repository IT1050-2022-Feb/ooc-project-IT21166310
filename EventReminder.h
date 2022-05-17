#include<iostream>
#include <string>
#include "Reminder.h"
using namespace std;
//EventReminder class 
class EventReminder:public Reminder{
        protected:
             string eventDescription;

        public:
             EventReminder(); //default constructor
             EventReminder(string Rname,string Rdate,string Rtime,string EeventDescription);
             void addEventReminder();
             void updateEventReminder();
             void deleteEventReminder();
             void displayDetails(){
                cout<<"Event name         :"<<name<<endl;
                cout<<"Event Reminder Date:"<<date<<endl;
                cout<<"Event reminder time:"<<time<<endl;
                cout<<"Event Description  :"<<eventDescription<<endl;
          }
             ~EventReminder(); //default destructor

};
