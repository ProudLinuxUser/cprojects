#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void times(int n, int m, int s);
void timers(int n, int m, int s);
void end(void);

int all_h, all_m, all_s;

int main(void)
{
    printf("Set Timer\n");

    int hours = get_int("--Hours|");
    int min   = get_int("-Minutes|");
    int sec   = get_int("-Seconds|");

    all_h = hours;
    all_m = min;
    all_s = sec;

    times(hours, min, sec);
}

void times(int n, int m, int s)
{
    if (n < 0 || m < 0 || s < 0)
    {
        printf("Error404,Not a valid formatum\n");
        exit(1);
    }

    int hour   = n;
    int minute = m;
    int second = s;   

    minute += second / 60;
    second %= 60;

    hour += minute / 60;
    minute %= 60;

    all_h = hour;
    all_m = minute;
    all_s = second;

    while (hour > 0 || minute > 0 || second > 0)
    {
        timers(hour, minute, second);

        if (second > 0)
        {
            second--;
        }
        else if (minute > 0)
        {
            minute--;
            second = 59;
        }
        else if (hour > 0)
        {
            hour--;
            minute = 59;
            second = 59;
        }
    }

    end();
}

void timers(int n, int m, int s)
{
    printf("|-TIMER!-|\n");
    printf("|%02i:%02i:%02i|\n", n, m, s);
    printf("|HH-MM-SS|\n");

    sleep(1);
    system("clear");
}

void end(void)
{
    printf("Time is Up-----|HH-MM-SS|\n");
    printf("Whole time was:|%02i:%02i:%02i|\n", all_h, all_m, all_s);
}
