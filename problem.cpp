#include <iostream>
using namespace std;

class Time {
    private:
        int hour;
        int min;
        int sec;
        char mode;
    public:
        Time() {
            hour = 0;
            min = 0;
            sec = 0;
            mode = 'a';
        }
        Time(int h, int m, int s, char md) {
            hour = h;
            min = m;
            sec = s;
            mode = md;
        }
        Time(int h, int m, int s) {
            hour = h;
            min = m;
            sec = s;
            mode = 'a';
        }
        Time(const Time& t) {
            hour = t.hour;
            min = t.min;
            sec = t.sec;
            mode = t.mode;
        }
        int getHours() {
            return hour;
        }
        int getMinutes() {
            return min;
        }
        int getSeconds() {
            return sec;
        }
        char getMode() {
            return mode;
        }
        void setHours(int h) {
            hour = h;
        }
        void setMinutes(int m) {
            min = m;
        }
        void setSeconds(int s) {
            sec = s;
        }
        void setMode(char md) {
            mode = md;
        }
        void displayTime() {
            cout << hour << ":" << min << ":" << sec << " ";
            if (mode == 'a' || mode == 'A') {
                cout << "AM" << endl;
            }
            else if (mode == 'p' || mode == 'P') {
                cout << "PM" << endl;
            }
            else {
                cout << "Invalid mode" << endl;
            }
        }
        double convertToSeconds() {
            return hour * 3600 + min * 60 + sec;
        }
        double convertToMinutes() {
            return hour * 60 + min + sec / 60.0;
        }
        double convertToHours() {
            return hour + min / 60.0 + sec / 3600.0;
        }
        void convertTo24HourFormat() {
            if (mode == 'p' || mode == 'P') {
                if (hour != 12) {
                    hour += 12;
                }
            }
            else if (mode == 'a' || mode == 'A') {
                if (hour == 12) {
                    hour = 0;
                }
            }
        }
        void incrementSeconds(int s) {
            sec += s;
            min += sec / 60;
            sec = sec % 60;
            hour += min / 60;
            min = min % 60;
            hour = hour % 24;
        }
        void incrementMinutes(int m) {
            min += m;
            hour += min / 60;
            min = min % 60;
            hour = hour % 24;
        }
};

int main() {
    Time t1(11, 42, 51, 'a');
    Time t2(t1);

    t1.displayTime();
    t2.displayTime();

    t1.incrementSeconds(70);
    t2.incrementMinutes(120);

    t1.displayTime();
    t2.displayTime();

    return 0;
}
