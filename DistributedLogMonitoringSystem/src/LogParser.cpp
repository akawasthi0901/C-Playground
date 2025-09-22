#include "LogParser.hpp"
#include <fstream>
#include <sstream>

std::vector<LogEntry> LogParser::parse(const std::string& filePath) {
    std::vector<LogEntry> entries;
    std::ifstream file(filePath);
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        LogEntry entry;
        iss >> entry.timestamp >> entry.level;
        std::getline(iss, entry.message);
        entries.push_back(entry);
    }
    return entries;
}
