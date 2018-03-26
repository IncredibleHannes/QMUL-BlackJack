#ifndef FILELOGGER_H_
#define FILELOGGER_H_

#include <iostream>
#include <vector>

class FileLogger {
private:
  std::string startTime = "";
  std::string endTime = "";
  std::string filename = "";
  std::vector<std::string> gameResults = {};

public:
  FileLogger() = default;
  void logStartTime();
  void logEndTime();
  void logPlayerWon();
  void logBankWon();
  void logDraw();
  void writeLogFile();

};
#endif
