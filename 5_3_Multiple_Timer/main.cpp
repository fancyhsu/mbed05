#include "mbed.h"


Timer timer_fast, timer_slow;

DigitalOut redLED(LED1);

DigitalOut greenLED(LED2);


int main(){

    timer_fast.start();

    timer_slow.start();


    while(1){

        if(timer_fast.read() > 5){

            redLED = !redLED;

            timer_fast.reset();

        }

        if(timer_slow.read() > 1){

            greenLED = !greenLED;

            timer_slow.reset();

        }

    }

}