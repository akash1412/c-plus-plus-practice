#include <iostream>
using namespace std;

float sum(float a,float b);

void introduceMe(string name, int age=0);

int main()
{
    int age;

    // bool isTodaySunny = false;
    // bool isTodayWeekend = true;

    // if (isTodaySunny && isTodayWeekend)
    // {

    //     cout << "Go to the park" << endl;
    // }else if(isTodayWeekend && !isTodaySunny){
    //         cout << "Go to park but,Take an Umbrella" << endl;
    // }
    // else
    // {
    //    cout << "Go to work";
    // }

    // if(isTodayWeekend){
    //     if(isTodaySunny){
    //         cout << "Go to the park" << endl;
    //     }else cout << "Go to park but,Take an Umbrella";
    // }else cout << "Go to work" << endl;

    // return 0;

    int counter = 1;

    // cout << "WHILE";

    // while (counter <= 10)
    // {
    //     cout << counter << endl;

    //     counter ++;
    // }

    // cout << "DO WHILE" << endl;

    // do
    // {

    //     cout << counter << endl;

    //     counter++;
    // } while (counter <= 5);

    // string animals[5]={"cat","dog","goat","bee"};

    // for(int i = 0;i< 5;i++){
    //    cout << animals[i] << endl;
    // }

//    cout << sum(2.2,5) << endl;

   introduceMe("Akash");
}


float sum(float a,float b){
    return a + b;
}

void introduceMe(string name,int age){
    cout << "my name is " << name << endl;
    cout << "my age is " << age << endl;
}