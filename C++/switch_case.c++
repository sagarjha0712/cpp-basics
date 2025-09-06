#include <iostream>
using namespace std;

int main (){
   int dayNumber;
   cin>> dayNumber;

   int WeekendOrWeekdays;
   cin>> WeekendOrWeekdays;

   switch(dayNumber) {
    case 1:
    cout<< "Monday"<<endl;
    switch (WeekendOrWeekdays) {
        case 1:
        cout<< "Weekend";
        break;
        case 2:
        cout<< "Weekdays";
        break;

    }
    break;
    case 2:
    cout<< "Tuesday"<<endl;
    break;
    case 3:
    cout<< "Wednesday"<<endl;
    break;
    case 4:
    cout<< "Thrusday"<<endl;
    break;
    case 5:
    cout<< "Friday"<<endl;
    break;
    case 6:
    cout<< "Saturdayy"<<endl;
    break;
    case 7:
    cout<< "Sunday"<<endl;
    break;

   }
    return 0;
}