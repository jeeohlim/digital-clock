/////////////////////////////////////////
//                                     //
//        DIGITAL CLOCK & TIMER        //     
//                                     //
//            BY: JEEOH LIM            //
//                                     //
/////////////////////////////////////////       

#include <iostream>
#include <unistd.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int timeInput;
double speedInput;

int secondsOne;
int secondsTen;

int minutesOne;
int minutesTen;

int hoursOne;
int hoursTen;

void Draw()
{
    cout << "        " << "DIGITAL CLOCK" << endl; //8 spaces to center DIGITAL CLOCK

    //top border
    for (int i = 0; i < 28; i++)
    {
        if (i == 0 || i == 27)
        {
            cout << " ";
        }
        else
        {
            cout << "_";
        }
    }
    cout << endl;

    //clock 1
    for (int i = 0; i < 28; i++)
    {
        if (i == 0 || i == 27)
        {
            cout << "|";
        }        
        else if (i == 3)
        {
            if (hoursTen == 0 || hoursTen == 2 || hoursTen == 3 || hoursTen == 5 || hoursTen == 6 || hoursTen == 7 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 6)
        {
            if (hoursOne == 0 || hoursOne == 2 || hoursOne == 3 || hoursOne == 5 || hoursOne == 6 || hoursOne == 7 || hoursOne == 8 || hoursOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 12)
        {
            if (minutesTen == 0 || minutesTen == 2 || minutesTen == 3 || minutesTen == 5 || minutesTen == 6 || minutesTen == 7 || minutesTen == 8 || minutesTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 15)
        {
            if (minutesOne == 0 || minutesOne == 2 || minutesOne == 3 || minutesOne == 5 || minutesOne == 6 || minutesOne == 7 || minutesOne == 8 || minutesOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 21)
        {
            if (secondsTen == 0 || secondsTen == 2 || secondsTen == 3 || secondsTen == 5 || secondsTen == 6 || secondsTen == 7 || secondsTen == 8 || secondsTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 24)
        {
            if (secondsOne == 0 || secondsOne == 2 || secondsOne == 3 || secondsOne == 5 || secondsOne == 6 || secondsOne == 7 || secondsOne == 8 || secondsOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;

    //clock 2
    for (int i = 0; i < 28; i++)
    {
        if (i == 0 || i == 27)
        {
            cout << "|";
        }
        else if (i == 2)
        {
            if (hoursTen == 0 || hoursTen == 4 || hoursTen == 5 || hoursTen == 6 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 3)
        {
            if (hoursTen == 2 || hoursTen == 3 || hoursTen == 4 || hoursTen == 5 || hoursTen == 6 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 4)
        {
            if (hoursTen == 0 || hoursTen == 1 || hoursTen == 2 || hoursTen == 3 || hoursTen == 4 || hoursTen == 7 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 5)
        {
            if (hoursOne == 0 || hoursOne == 4 || hoursOne == 5 || hoursOne == 6 || hoursOne == 8 || hoursOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 6)
        {
            if (hoursOne == 2 || hoursOne == 3 || hoursOne == 4 || hoursOne == 5 || hoursOne == 6 || hoursOne == 8 || hoursOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 7)
        {
            if (hoursTen == 0 || hoursTen == 1 || hoursTen == 2 || hoursTen == 3 || hoursTen == 4 || hoursTen == 7 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 9)
        {
            cout << "o";
        }
        else if (i == 11)
        {
            if (minutesTen == 0 || minutesTen == 4 || minutesTen == 5 || minutesTen == 6 || minutesTen == 8 || minutesTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 12)
        {
            if (minutesTen == 2 || minutesTen == 3 || minutesTen == 4 || minutesTen == 5 || minutesTen == 6 || minutesTen == 8 || minutesTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 13)
        {
            if (minutesTen == 0 || minutesTen == 1 || minutesTen == 2 || minutesTen == 3 || minutesTen == 4 || minutesTen == 7 || minutesTen == 8 || minutesTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 14)
        {
            if (minutesOne == 0 || minutesOne == 4 || minutesOne == 5 || minutesOne == 6 || minutesOne == 8 || minutesOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 15)
        {
            if (minutesOne == 2 || minutesOne == 3 || minutesOne == 4 || minutesOne == 5 || minutesOne == 6 || minutesOne == 8 || minutesOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 16)
        {
            if (minutesOne == 0 || minutesOne == 1 || minutesOne == 2 || minutesOne == 3 || minutesOne == 4 || minutesOne == 7 || minutesOne == 8 || minutesOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 18)
        {
            cout << "o";
        }
        else if (i == 20)
        {
            if (secondsTen == 0 || secondsTen == 4 || secondsTen == 5 || secondsTen == 6 || secondsTen == 8 || secondsTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 21)
        {
            if (secondsTen == 2 || secondsTen == 3 || secondsTen == 4 || secondsTen == 5 || secondsTen == 6 || secondsTen == 8 || secondsTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 22)
        {
            if (secondsTen == 0 || secondsTen == 1 || secondsTen == 2 || secondsTen == 3 || secondsTen == 4 || secondsTen == 7 || secondsTen == 8 || secondsTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 23)
        {
            if (secondsOne == 0 || secondsOne == 4 || secondsOne == 5 || secondsOne == 6 || secondsOne == 8 || secondsOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 24)
        {
            if (secondsOne == 2 || secondsOne == 3 || secondsOne == 4 || secondsOne == 5 || secondsOne == 6 || secondsOne == 8 || secondsOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 25)
        {
            if (secondsOne == 0 || secondsOne == 1 || secondsOne == 2 || secondsOne == 3 || secondsOne == 4 || secondsOne == 7 || secondsOne == 8 || secondsOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;

    //clock 3
    for (int i = 0; i < 28; i++)
    {
        if (i == 0 || i == 27)
        {
            cout << "|";
        }
        else if (i == 2)
        {
            if (hoursTen == 0 || hoursTen == 2 || hoursTen == 6 || hoursTen == 8)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 3)
        {
            if (hoursTen == 0 || hoursTen == 2 || hoursTen == 3 || hoursTen == 5 || hoursTen == 6 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 4)
        {
            if (hoursTen == 0 || hoursTen == 1 || hoursTen == 3 || hoursTen == 4 || hoursTen == 5 || hoursTen == 6 || hoursTen == 7 || hoursTen == 8 || hoursTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 5)
        {
            if (hoursOne == 0 || hoursOne == 2 || hoursOne == 6 || hoursOne == 8)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 6)
        {
            if (hoursOne == 0 || hoursOne == 2 || hoursOne == 3 || hoursOne == 5 || hoursOne == 6 || hoursOne == 8 || hoursOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 7)
        {
            if (hoursOne == 2)
            {
                cout << " ";
            }
            else
            {
                cout << "|";
            }
        }
        else if (i == 9)
        {
            cout << "o";
        }
        else if (i == 11)
        {
            if (minutesTen == 0 || minutesTen == 2 || minutesTen == 6 || minutesTen == 8)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 12)
        {
            if (minutesTen == 0 || minutesTen == 2 || minutesTen == 3 || minutesTen == 5 || minutesTen == 6 || minutesTen == 8 || minutesTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 13)
        {
            if (minutesTen == 0 || minutesTen == 1 || minutesTen == 3 || minutesTen == 4 || minutesTen == 5 || minutesTen == 6 || minutesTen == 7 || minutesTen == 8 || minutesTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 14)
        {
            if (minutesOne == 0 || minutesOne == 2 || minutesOne == 6 || minutesOne == 8)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 15)
        {
            if (minutesOne == 0 || minutesOne == 2 || minutesOne == 3 || minutesOne == 5 || minutesOne == 6 || minutesOne == 8 || minutesOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 16)
        {
            if (minutesOne == 0 || minutesOne == 1 || minutesOne == 3 || minutesOne == 4 || minutesOne == 5 || minutesOne == 6 || minutesOne == 7 || minutesOne == 8 || minutesOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 18)
        {
            cout << "o";
        }
        else if (i == 20)
        {
            if (secondsTen == 0 || secondsTen == 2 || secondsTen == 6 || secondsTen == 8)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 21)
        {
            if (secondsTen == 0 || secondsTen == 2 || secondsTen == 3 || secondsTen == 5 || secondsTen == 6 || secondsTen == 8 || secondsTen == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 22)
        {
            if (secondsTen == 0 || secondsTen == 1 || secondsTen == 3 || secondsTen == 4 || secondsTen == 5 || secondsTen == 6 || secondsTen == 7 || secondsTen == 8 || secondsTen == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 23)
        {
            if (secondsOne == 0 || secondsOne == 2 || secondsOne == 6 || secondsOne == 8)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 24)
        {
            if (secondsOne == 0 || secondsOne == 2 || secondsOne == 3 || secondsOne == 5 || secondsOne == 6 || secondsOne == 8 || secondsOne == 9)
            {
                cout << "_";
            }
            else
            {
                cout << " ";
            }
        }
        else if (i == 25)
        {
            if (secondsOne == 0 || secondsOne == 1 || secondsOne == 3 || secondsOne == 4 || secondsOne == 5 || secondsOne == 6 || secondsOne == 7 || secondsOne == 8 || secondsOne == 9)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;

    //bottom border
    for (int i = 0; i < 28; i++)
    {
        if (i == 0 || i == 27)
        {
            cout << "|";
        }
        else
        {
            cout << "_";
        }
        
    }
    cout << endl;
    cout << "          " << speedInput << "x speed" << endl; //10 spaces in front to center speed text under clock

    /*if (hoursTen == 1 && hoursOne == 1 && minutesTen == 1 && minutesOne == 1) //11:11 easter egg
    {
        cout << "     11:11! Make a wish!" << endl;
    }*/
}

int main()
{
    cout << "What time is it? Enter as 'hhmmss'" << endl;
    cout << "Example: 123456 = 12:34:56" << endl;
    cin >> timeInput;

    //CONVERT TIME INPUT INTO HOURS, MINUTES, & SECONDS VARIABLES
    secondsOne = timeInput % 10;
    timeInput = timeInput / 10;

    secondsTen = timeInput % 10;
    timeInput = timeInput / 10;

    minutesOne = timeInput % 10;
    timeInput = timeInput / 10;

    minutesTen = timeInput % 10;
    timeInput = timeInput / 10;

    hoursOne = timeInput % 10;
    timeInput = timeInput / 10;

    hoursTen = timeInput % 10;

    if (secondsTen > 5)
    {
        secondsTen = 5;
    }
    if (minutesTen > 5)
    {
        minutesTen = 5;
    }
    if (hoursTen > 2 && hoursOne > 4)
    {
        hoursTen = 2;
        hoursOne = 4;
    }
    if (hoursTen > 2)
    {
        hoursTen = 2;
    }
    //FINISH CONVERSION
    
    cout << "Choose a speed, negative and decimal speeds are acceptable" << endl;
    cin >> speedInput;

    while (speedInput == 0)
    {
        cout << "Input a valid non-zero, speed! Fractions must be written as decimals!" << endl;
        cin >> speedInput;
    }

    while (1 == 1)
    {
        system("clear");
        Draw();

        if (speedInput > 0)
        {
            usleep(1000000 / speedInput);
            secondsOne++;
        }
        else if (speedInput < 0)
        {
            usleep(1000000 / abs(speedInput));
            secondsOne--;
        }
        
        if (secondsOne == 10)
        {
            secondsOne = 0;
            secondsTen++;
        }
        if (secondsOne == -1)
        {
            secondsOne = 9;
            secondsTen--;
        }
        if (secondsTen == 6)
        {
            secondsOne = 0;
            secondsTen = 0;
            minutesOne++;
        }
        if (secondsTen == -1)
        {
            secondsOne = 9;
            secondsTen = 5;
            minutesOne--;
        }
        if (minutesOne == 10)
        {
            secondsOne = 0;
            secondsTen = 0;
            minutesOne = 0;
            minutesTen++;
        }
        if (minutesOne == -1)
        {
            secondsOne = 9;
            secondsTen = 5;
            minutesOne = 9;
            minutesTen--;
        }
        if (minutesTen == 6)
        {
            secondsOne = 0;
            secondsTen = 0;
            minutesOne = 0;
            minutesTen = 0;
            hoursOne++;
        }
        if (minutesTen == -1)
        {
            secondsOne = 9;
            secondsTen = 5;
            minutesOne = 9;
            minutesTen = 5;
            hoursOne--;
        }
        if (hoursTen == 2 && hoursOne == 4) //24
        {
            secondsOne = 0;
            secondsTen = 0;
            minutesOne = 0;
            minutesTen = 0;
            hoursOne = 0;
            hoursTen = 0;
        }
        if (hoursOne == 10)
        {
            secondsOne = 0;
            secondsTen = 0;
            minutesOne = 0;
            minutesTen = 0;
            hoursOne = 0;
            hoursTen++;
        }
        if (hoursOne == -1)
        {
            secondsOne = 9;
            secondsTen = 5;
            minutesOne = 9;
            minutesTen = 5;
            hoursOne = 9;
            hoursTen--;
        }
        if (hoursTen == 10)
        {
            secondsOne = 0;
            secondsTen = 0;
            minutesOne = 0;
            minutesTen = 0;
            hoursOne = 0;
            hoursTen = 0;
        }
        if (hoursTen == -1)
        {
            secondsOne = 9;
            secondsTen = 5;
            minutesOne = 9;
            minutesTen = 5;
            hoursOne = 3;
            hoursTen = 2;
        }
    }

    return 0;
}