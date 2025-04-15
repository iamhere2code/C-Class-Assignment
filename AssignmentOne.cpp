//============================================================================
// File Name   : AssignmentOne.cpp
// Author      : Alisha Faraz
// Copyright   : N/A
// Description :  This program represents a ticket stub

// Disclaimer:  N/A
// Revision History:
// Date              Version     Change ID         Author             Comment
// 04-15-25          1.0           4               Alisha Faraz      Finalized spacing
//============================================================================



#include <iostream>
using namespace std;
#include <string>

int main() {
    string theater;
    string movie_name;
    string am_pm;
    string movie_rating;
    int hour = 0;
    int minute = 0;
    int month = 0;
    int day = 0;
    int year = 0;
    int theater_num = 0;
    double admission_price = 0.0;

    cout<<"If your movie in the afternoon or morning (am or pm)?\n";
    cin>>am_pm;
    cout<<"What hour is the movie?\n";
    cin>>hour;
    cout<<"What minute is the movie?\n";
    cin>>minute;
    cout<<"What month is the movie?\n";
    cin>>month;
    cout<<"What day is the movie?\n";
    cin>>day;
    cout<<"What year is the movie?\n";
    cin>>year;
    cout<<"What is the theater number?\n";
    cin>>theater_num;
    cout<<"What is the admission price?\n";
    cin>>admission_price;
    cin.ignore();
    cout<<"What's the name of the movie\n";
    getline(cin, movie_name);
    cout<<"What's the name of the theater?\n";
    getline(cin, theater);
    cout<<"What is the rating?\n";
    getline(cin, movie_rating);

    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"   "<<endl;
    cout<<"\t\t"<<theater<<endl;
    cout<<"\tPresenting"<<endl;
    cout<<"   "<<endl;
    cout<<"\t"<<movie_name<<endl;
    cout<<"   "<<endl;
    cout<<"\tShow time: "<<hour<<":"<<minute<<am_pm<<"\tDate:"<<month<<"/"<<day<<"/"<<year<<endl;
    cout<<"   "<<endl;
    cout<<"\tTheater: "<<theater_num<<"\t"<<movie_rating;
    cout<<"   "<<endl;
    cout<<"\tAdult Admission: $"<<admission_price<<endl;
    cout<<"   "<<endl;
    cout<<"\tDon't forget to get your free small popcorn with 4 tickets or more!!!"<<endl;
    cout<<"   "<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;

    return 0;
};

/*g++ AssignmentOne.cpp -o AssignmentOne
./AssignmentOne*/