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
     
         
