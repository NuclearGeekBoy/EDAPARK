#include<iostream>
#include<string>
#include<raylib.h>

#include"connectivity.hpp"
#include"tools.hpp"
#include"windows.hpp"
#include "MQTTClient.h"

using namespace std;

int main()
{
/*CREATION OF THE ROBOT VARIABLES*/    
    MQTTClient robot(ID);
    
/*CONNECTS TO THE BOT*/
    bool connection = robot.connect(HOST,PORT,USERNAME,PASSWORD);

/*VARIABLES FOR DEBUGGING*/
    vector<MQTTMessage> received;
    vector<char> testerVector;
    float testerFloat;
    long int timeout = 63640;
    // vector<char> x (4);
    // vector<char> y (4);
    // vector<char> z (4);

/*SUSCRIPTION PATHS*/
    robot.subscribe(BATTERY);

/*PROGRAM*/
    while(robot.isConnected() || robot.connect(HOST,PORT,USERNAME,PASSWORD))
    {
        received = robot.getMessages();
        
        

    }
}