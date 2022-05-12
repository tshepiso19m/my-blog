#include <iostream>
using namespace std;

int main () {
    //declaring variable
    int MonHrs, TueHrs, WedHrs, MonMins, TueMins, WedMins, totalhours, totalminutes, salary, extraminutes, extrahours;


    //prompts the user to enter their Hrs and Mins for Mon,Tues and Wed
    cout << " Enter the number of hours and minutes which you worked on Monday " << endl;
    cin >> MonHrs >>MonMins;

    cout << " Enter the number of hours and minutes which you worked on Tuesday " << endl;
    cin >> TueHrs >>TueMins;

    cout << " Enter the number of hours and minutes which you worked on Wednesday " << endl;
    cin >> WedHrs >>WedMins;

    totalhours = MonHrs + TueHrs + WedHrs;
    totalminutes = MonMins + TueMins + WedMins;
    extrahours = totalminutes / 60;
    totalhours += extrahours;
    extraminutes = totalminutes % 60;

    if(totalhours > 40) {

            salary = ((40 * 200) + (totalhours - 40) * 250);
    } else{

        salary = totalhours * 200;



    }

    cout <<"You worked for " <<totalhours<<" hours and " <<extraminutes <<" minutes and your salary is R" <<salary;

    return 0;








}




}