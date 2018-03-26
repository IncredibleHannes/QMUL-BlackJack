#ifndef FILELOGGER_H_
#define FILELOGGER_H_

#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>

class FileLogger {
private:
  std::string startTime = "";
  std::string endTime = "";
  std::string filename = "";
  std::vector<std::string> gameResults = {};
  int getWon();
  int getLost();
  int getDraw();

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
