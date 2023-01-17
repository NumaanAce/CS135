// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

class LightSwitch {
    private:
    const bool on = 1, off = 0, down = 0, up = 1;
    int switch1, switch2, lamp;
    public:
    LightSwitch();
    LightSwitch(int s1, int s2, int l);
    int get_first_switch_state(); // 0 for down, 1 for up
    int get_second_switch_state();
    int get_lamp_state(); // 0 for off, 1 for on
    void toggle_first_switch();
    void toggle_second_switch();
};

LightSwitch::LightSwitch(){
    switch1 = 0;
    switch2 = 0;
    lamp = 0;
}

LightSwitch::LightSwitch(int s1, int s2, int l){
    switch1 = s1;
    switch2 = s2;
    lamp = l;
}

int LightSwitch::get_first_switch_state(){
    return switch1;
}

int LightSwitch::get_second_switch_state(){
    return switch2;
}

void LightSwitch::toggle_second_switch(){
    if (switch2 == down){
        switch2 = up;
        if (lamp == on)
            lamp = off;
        else if (lamp == off)
            lamp = on;
    }
    else if (switch2 == up){
        switch2 = down;
        if (lamp == on)
            lamp = off;
        else if (lamp == off)
            lamp = on;
    }
}

void LightSwitch::toggle_first_switch(){
    if (switch1 == down){
        switch1 = up;
        if (lamp == on)
            lamp = off;
        else if (lamp == off)
            lamp = on;
    }
    else if (switch1 == up){
        switch1 = down;
        if (lamp == on)
            lamp = off;
        else if (lamp == off)
            lamp = on;
    }

}

int LightSwitch::get_lamp_state(){
    return lamp;
}

int main(){
    LightSwitch test;
    cout << test.get_first_switch_state() << endl;
    cout << test.get_second_switch_state() << endl;
    cout << test.get_lamp_state() << endl;
    test.toggle_first_switch();
    cout << test.get_first_switch_state() << endl;
    cout << test.get_lamp_state() << endl;

    return 0;
}