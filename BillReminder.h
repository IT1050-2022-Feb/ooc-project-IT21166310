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
          ~BillReminder();//default destructor   
};
