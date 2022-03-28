#include "tools.hpp"
#include<string.h>

vector<char> floatToVector(float * messageOut)
{
    vector<char> toReturn(sizeof(float)); 
    memcpy(toReturn.data() , messageOut , sizeof(float)); //memcpy copies memory from an specific location to an specific amount
    return toReturn;
}



float vectorToFloat(vector<char> *messageIn)
{
    float toReturn; 
    memcpy(&toReturn , messageIn->data() , sizeof(float)); //memcpy copies memory from an specific location to an specific amount
    return toReturn;


}
//Another way of doing it, basically making by hand the memcpy funct
/*
float vectorToFloat(vector<char> *messageIn)
{
    char allMessage[sizeof(float)];
    void *floatLocation; //this is the pointer that is going to do all the job

    floatLocation = allMessage;

    for(int byteToUse = 0 ; byteToUse < sizeof(float) ; byteToUse++)
    {
        allMessage[byteToUse] = messageIn->at(byteToUse);
    }
    return *(float *)floatLocation;
}*/