#include "SpeedMonitor.h"
#include "ConsoleLogger.h"

int main(){
ConsolerLogger logger;
SpeedMonitor instance {10, &logger};
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
}
