// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <iomanip>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

struct Time{
    public:
    int h;
    int m;
    int minutesUntil(Time earlier, Time later);
    int timeToMinutes(Time time);
};

class Movie{ 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot{ 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
}; 

Time addMinutes(Time time0, int min){
    Time additionalTime;
    
    additionalTime.m = time0.m + min;
    additionalTime.h = time0.h;

    if( additionalTime.m >= 60 )
    {
        additionalTime.h += ( additionalTime.m - additionalTime.m % 60 ) / 60;
        additionalTime.m = additionalTime.m % 60;
    }
    return additionalTime;
}


int minutesUntil(Time earlier, Time later){
    int totalMinutesUntil;
    int earlyHourToMinutes = (earlier.h * 60) + earlier.m;
    int laterHourToMinutes = (later.h * 60) + later.m;
    totalMinutesUntil = laterHourToMinutes - earlyHourToMinutes;

    return totalMinutesUntil;
}

int timeToMinutes(Time time){
    int toMinutes = (time.h * 60) + time.m;
    return toMinutes;
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    printMovie(ts.movie);

    cout << " [starts at "; printTime(ts.startTime); cout << ", ends by "; printTime(addMinutes(ts.startTime, ts.movie.duration)); cout << "]";
    cout << endl;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot next = {nextMovie, {addMinutes(ts.startTime, ts.movie.duration)}};
    return next;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    if ()
}

int main(){

    return 0;
}

// Comment
// Comment
// Comment
// Comment
// Comment
// Comment
// Comment
// Comment
// Comment
