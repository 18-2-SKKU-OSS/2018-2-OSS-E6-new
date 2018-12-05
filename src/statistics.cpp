#include "statistics.hpp"

bool Stats::collectStatistics(int size) {

  std::string file_dir = "../data/statistics" + std::to_string(size) + ".txt";
  std::ifstream statistics(file_dir);
  if (statistics.fail()) {
    return false;
  }

  statistics >> bestScore >> gameCount >> winCount >> totalMoveCount >>
      totalDuration;
  return true;
}
