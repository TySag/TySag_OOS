#include "base.h"
#include "lib.h"
#include "input.h"
#include "MainCtrl.h"
#include "fs.h"
#include "mm.h"
#include "cpu.h"
#include "net.h"
#define Com_State_Off 0//关机
#define Com_State_On 1//开机
#define Com_State_put 2//休眠 or 挂起
int ComState=0;//默认off
extern char *Cmd_Word;
bool machine_init(){
    fs_init();
    mm_init();
    cpu_init();
    net_init();
}
int main(){
    ComState=(int)Input_Power();
    machine_init();
    while(ComState){
        /*while(WaitforInput()){//keyboard comunication
        }*/
        if(WaitforInput()){//add a new Thread into the thread of PArray
            //AddToThreadArray(Cmd_Word,len);
            //Cmd_Word=NULL;
        }
        else{//do what the computer can do

        }
    }
    return 0;
}
