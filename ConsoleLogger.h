#include <string>

class ConsoleLogger: public ILogger {
  public:
    void Write(const string& message);
  
};
