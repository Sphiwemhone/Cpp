#ifndef Time_H  // was: #ifindef
#define Time_H

class Time {
    private:
        int hour;
        int minute;
        int second;

    public:
        void printTime();
        void setTime(int, int, int);
};

#endif