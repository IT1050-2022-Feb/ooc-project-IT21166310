#include <iostream>
#include<string> 
using namespace std;
 //Reminder class
class Reminder{
    protected:
          string name;
          string date;
          string time;

    public:
       //default constructor
         Reminder(){
           name="None";
           date="None";
           time="None";
         }
        //Overloaded constructor
         Reminder(string Rname,string Rdate,string Rtime){
           name=Rname;
           date=Rdate;
           time=Rtime;
         }
         virtual void displayDetails(){
           displayDetails();
         }
      
};
//BillReminder class
class BillReminder:public Reminder{
       protected:
          double billAmount;
          string serviceProvider;

       public:
           //default constructor
            BillReminder(){
            billAmount=0;
            serviceProvider="None";
           }
          //Overloaded constructor
           BillReminder(string Rname,string Rdate,string Rtime,double BbillAmount,string BserviceProvider):Reminder(Rname,Rdate,Rtime){
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
        void addBillReminder();
        void updateBillReminder();
        void deleteBillReminder(); 
        ~BillReminder();//default destructor
};
//EventReminder class
class EventReminder:public Reminder{
        protected:
            string eventDescription;

        public:
            //default constructor
            EventReminder(){  
            eventDescription="None";
         }
           //Overloaded constructor
         EventReminder(string Rname,string Rdate,string Rtime,string EeventDescription):Reminder(Rname,Rdate,Rtime){
            eventDescription=EeventDescription;
         }
        void displayDetails(){
           cout<<"Event name         :"<<name<<endl;
           cout<<"Event Reminder Date:"<<date<<endl;
           cout<<"Event reminder time:"<<time<<endl;
           cout<<"Event Description  :"<<eventDescription<<endl;
          }
        void addEventReminder();
        void updateEventReminder();
        void deleteEventReminder();
        ~EventReminder(); //default destructor

};

int main(){
 //creating object 
Reminder *b1,*b2;
b1=new BillReminder();
b1->displayDetails(); 
cout<<"================================================"<<endl;
b2=new BillReminder("Electricity bill","2022/02/22","07.50pm",7500,"CEB");
b2->displayDetails();
cout<<"================================================"<<endl;
Reminder *e1,*e2;
e1=new EventReminder();
e1->displayDetails();
cout<<"================================================"<<endl;
e2=new EventReminder("Birthday Party","2022/11/06","12.00am","Hiruni's 21st birth day");
e2->displayDetails();




  delete b1;
  delete e1;
  delete b2;
  delete e2;
  return 0;
}