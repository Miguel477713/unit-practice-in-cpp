#include <string>
#include <iostream>
#include "ConsoleLogger.h"

void ConsoleLogger::Write(const string& message) {
  cout << message << endl;
}
