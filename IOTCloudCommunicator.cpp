#include <random>
#include <string>
#include "IOTCloudCommunicator.h"

int IOTCloudCommunicator::pushMessage(const string& message){
    //Interact with internet and push the message to MessageQueue
    //if communiction succesfull return value from ramge {200 -400} status code otherwise returns errocode (400 - 500)
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(200, 500);
    return distr(gen);

}

