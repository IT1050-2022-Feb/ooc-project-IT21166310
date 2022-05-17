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
             ~EventReminder(); //default destructor

};
