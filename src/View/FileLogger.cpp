#include "FileLogger.h"
#include <ctime>

void FileLogger::logStartTime() {
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  // Saving start time in format: HH:MM DD:MMM:YYYY
  strftime(buffer, sizeof(buffer),"%H:%M %d-%h-%Y ", timeinfo);
  std::string str(buffer);
  this->startTime = str;

  // writing filename in format: yymmdd_hhmm.txt
  strftime(buffer, sizeof(buffer),"%y%m%d_%H%M.txt", timeinfo);
  std::string str2(buffer);
  this->filename = str2;
};

void FileLogger::logEndTime() {
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  // Saving end time in format: HH:MM DD:MMM:YYYY
  strftime(buffer, sizeof(buffer),"%H:%M %d-%h-%Y ", timeinfo);
  std::string str(buffer);
  this->endTime = str;
};

void FileLogger::logPlayerWon() {
  std::string tmpString = "Round ";
  tmpString += std::to_string(this->gameResults.size() + 1);
  tmpString += ": won.";

  this->gameResults.push_back(tmpString);
};

void FileLogger::logBankWon() {
  std::string tmpString = "Round ";
  tmpString += std::to_string(this->gameResults.size() + 1);
  tmpString += ": lost.";

  this->gameResults.push_back(tmpString);
};

void FileLogger::logDraw() {
  std::string tmpString = "Round ";
  tmpString += std::to_string(this->gameResults.size() + 1);
  tmpString += ": draw.";

  this->gameResults.push_back(tmpString);
};

void FileLogger::writeLogFile() {
  for (std::string s : gameResults) {
    std::cout << s << std::endl;
  }
};
