#include <iostream>
#include <string>
#include "BillReminder.h"
using namespace std;
//Implement BillReminder class
BillReminder::BillReminder(){
             billAmount=0;
             serviceProvider="None";
           }
 BillReminder::BillReminder(string Rname,string Rdate,string Rtime,double BbillAmount,string BserviceProvider):Reminder(Rname,Rdate,Rtime){
             billAmount=BbillAmount;
             serviceProvider=BserviceProvider;
           }
          void displayDetails(){
             cout<<"Bill name            :"<<name<<endl;
             cout<<"Bill Reminder Date   :"<<date<<endl;
             cout<<"Bill reminder time   :"<<time<<endl;
             cout<<"Bil Amount           :"<<billAmount<<endl;
             cout<<"Service provider name:"<<serviceProvider<<endl;
         }
         
