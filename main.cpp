#include <iostream>
#include <string>
#include "EventReminder.h"
#include "BillReminder.h"

using namespace std;

int main() {
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
