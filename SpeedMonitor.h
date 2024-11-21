#include <iostream>
#include <random> 
#include <string>
#include "ILogger.h"
#include "ISpeedMonitor.h"

using namespace std;

class SpeedMonitor{
    private : 
        int _speedThreshold;
        //Dependency
        ILogger * _logger;
        ISpeedSensor *_speedSensor;
      public:
          SpeedMonitor(int speedThreshold, ILogger *logger, ISpeedSensor *speedSensor): _speedThreshold{speedThreshold}, _logger{logger},  _speedSensor{speedSensor}{}
          void monitor();
};
