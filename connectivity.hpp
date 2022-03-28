#ifndef CONNECTIVITY_HPP
#define CONNECTIVITY_HPP
#include <string>

using namespace std;

/*CONNECTION CONSTS*/
const string HOST = "127.0.0.1"; 
const int PORT = 1883;
const string USERNAME = "user";
const string PASSWORD = "vdivEMMN3SQWX2Ez";
const string ID = "controller";    

/*SUSCRIPTION CONST*/
const string POSITION = "robot1/motion/position";
const string VOLATAGE = "robot1/motor1/voltage";
const string BATTERY = "robot1/power/batteryLevel";
const string TEMPERATURE = "robot1/motor1/temperature";
const string VELOCITY = "robot1/motion/velocity";

#endif 
