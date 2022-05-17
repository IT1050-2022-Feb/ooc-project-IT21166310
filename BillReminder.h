#include<iostream>
#include <string>
#include "Reminder.h"
using namespace std;
//BillReminder class
class BillReminder:public Reminder{
       protected:
          double billAmount;
          string serviceProvider;

       public:
          BillReminder(); //default constructor
          BillReminder(string Rname,string Rdate,string Rtime,double BbillAmount,string BserviceProvider);
          void addBillReminder();
          void updateBillReminder();
          void deleteBillReminder(); 
          void displayDetails(){
             cout<<"Bill name            :"<<name<<endl;
             cout<<"Bill Reminder Date   :"<<date<<endl;
             cout<<"Bill reminder time   :"<<time<<endl;
             cout<<"Bil Amount           :"<<billAmount<<endl;
             cout<<"Service provider name:"<<serviceProvider<<endl;
         }
          ~BillReminder();//default destructor   
};