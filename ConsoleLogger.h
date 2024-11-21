#include <string>
#include "ILogger.h"

class ConsoleLogger: public ILogger {
  public:
    void Write(const string& message);
  
};
