#include<iostream>
using namespace std;

class TIME {
public:
    int hours;
    int minutes;
    int seconds;

    TIME(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    TIME add(const TIME& t) {
        int totalSeconds = (hours + t.hours) * 3600 + (minutes + t.minutes) * 60 + (seconds + t.seconds);
        
        TIME result;
        result.hours = totalSeconds / 3600;
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;
        
        return result;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;

    cout << "Enter hours, minutes, and seconds for the first time: ";
    cin >> h1 >> m1 >> s1;
    TIME t1(h1, m1, s1);

    cout << "Enter hours, minutes, and seconds for the second time: ";
    cin >> h2 >> m2 >> s2;
    TIME t2(h2, m2, s2);

    TIME t3 = t1.add(t2);

    cout << "Sum of the two times: ";
    t3.display();

    return 0;
}
