/**
    <h1>FileLogger</h1>
    <h3>FileLogger.cpp</h3><br>
    This class is responsible for all file loggin.

    @author Johannes Hartmann
    @version 1.0
*/

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
  /**
   * @returns the number of wins in the game
   */
  int getWon();
  /**
   * @returns the number of losts in the game
   */
  int getLost();
  /**
   * @returns the number of draws in the game
   */
  int getDraw();

public:
  /**
   * default constructor
   */
  FileLogger() = default;
  /**
   * writes the current time in the startTime string
   */
  void logStartTime();
  /**
   * writes the current time in the endTime string
   */
  void logEndTime();
  /**
   * writes a player won string in the gameresult vecotr
   */
  void logPlayerWon();
  /**
   * writes a bank won string in the gameresult vecotr
   */
  void logBankWon();
  /**
   * writes a draw string in the gameresult vecotr
   */
  void logDraw();
  /**
   * construncts a log file with the given information that where logged before
   * has to be called at the end of the game to make shure the end time will be
   * logged
   */
  void writeLogFile();

};
#endif
