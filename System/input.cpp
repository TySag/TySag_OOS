#include "input.h"
#include "output.h"

bool Power_Button=false;//off


bool Input_Power(){
    Power_Button=~Power_Button;
    if(Power_Button) ShowLog("welcome to Virtural Os..");
    else ShowLog("it is in power off..");
    return Power_Button;
}
bool WaitforInput(){
    //if()
    //if()
    return false;
}
