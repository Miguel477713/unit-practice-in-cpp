#include <iostream>
#include <random> 
#include <string>
using namespace std;

class SpeedMonitor{
    private : int _speedThreshold;
  
      public:
          SpeedMonitor(int speedThreshold): _speedThreshold{speedThreshold} {}
          void monitor();
};
