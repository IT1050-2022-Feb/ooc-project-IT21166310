#include <iostream>
#include <string>
#include "EventReminder.h"
using namespace std;
//Implementing EventReminder class
EventReminder::EventReminder(){
           eventDescription="None";
         }
EventReminder::EventReminder(string Rname,string Rdate,string Rtime,string EeventDescription):Reminder(Rname,Rdate,Rtime){
            eventDescription=EeventDescription;
         }
      