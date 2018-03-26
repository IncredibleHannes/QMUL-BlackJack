#include "FileLogger.h"


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
  std::ofstream myStream("./" + this->filename);
  if(!myStream.is_open())
    return;

  myStream << "Game started at: " << this->startTime << std::endl;
  myStream << "Game finished at: " << this->endTime << std::endl;
  myStream << "Rounds: " << this->gameResults.size() << std::endl;
  myStream << "Won: " << this->getWon() << std::endl;
  myStream << "Lost: " << this->getLost() << std::endl;
  myStream << "Draw: " << this->getDraw() << std::endl;

  myStream << "--" << std::endl;

  for (std::string s : gameResults) {
    myStream << s << std::endl;
  }
  myStream.close();
};

int FileLogger::getWon() {
  int x = 0;
  for (std::string s : gameResults) {
    if (s.find("won") != std::string::npos)
      x ++;
  }
  return x;
}

int FileLogger::getLost() {
  int x = 0;
  for (std::string s : gameResults) {
    if (s.find("lost") != std::string::npos)
      x ++;
  }
  return x;
}

int FileLogger::getDraw() {
  int x = 0;
  for (std::string s : gameResults) {
    if (s.find("draw") != std::string::npos)
      x ++;
  }
  return x;
}
