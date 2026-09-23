#include<iostream>

//Write a C++ program to create a Time class that stores hours, minutes, and seconds. 
//Implement operator overloading for the + operator to add two Time objects together, 
//ensuring that seconds and minutes are properly adjusted (i.e., 60 seconds = 1 minute, 
//60 minutes = 1 hour). Demonstrate the functionality by adding two Time objects and 
//displaying the result.

class Time
{
    public:
        int hours, minutes, seconds;

        Time(){}

        Time(int h, int m, int s)
        {
            hours = h;
            minutes = m;
            seconds = s;
        }

        Time operator+ (Time t)
        {
            Time res;

            res.hours = hours + t.hours;
            res.minutes = minutes + t.minutes;
            res.seconds = seconds + t.seconds;

            if(res.seconds >= 60)
            {
                res.minutes++;
                res.seconds -= 60;
            }

            if(res.minutes >= 60)
            {
                res.hours++;
                res.minutes -= 60;
            }

            return res;
        }
}; 

int main()
{
    Time t1(3,34,25);
    Time t2(4,0,12);

    Time t3  = t1 + t2;

    std::cout<<"Hours:"<<t3.hours<<std::endl;
    std::cout<<"Minutes:"<<t3.minutes<<std::endl;
    std::cout<<"Seconds:"<<t3.seconds<<std::endl;

    return 0;
}