#include <Arduino.h> 
#include "JavaSerial.h"


JavaSerial::JavaSerial(){
    Serial.begin(9600);    
}

String JavaSerial::readSerial(){
    String inputString = "";
    if (Serial.available() > 0) {
        inputString = Serial.readString();
    }
    return inputString;
};

void JavaSerial::writeSerial(String message){
    Serial.println(message);
};

bool JavaSerial::messageAvailable() {
    return Serial.available() > 0;
}