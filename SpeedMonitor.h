#include <iostream>
#include <random> 
#include <string>
#include "ILogger.h"

using namespace std;

class SpeedMonitor{
    private : 
        int _speedThreshold;
        //Dependency
        ILogger * _logger;
      public:
          SpeedMonitor(int speedThreshold, ILogger *logger): _speedThreshold{speedThreshold}, _logger{logger} {}
          void monitor();
};
