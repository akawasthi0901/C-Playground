#pragma once
#include "LogParser.hpp"
#include <vector>
#include <string>
#include <mutex>

class LogAggregator {
public:
    void addLogs(const std::vector<LogEntry>& logs);
    std::vector<LogEntry> getLogsByLevel(const std::string& level);
private:
    std::vector<LogEntry> allLogs;
    std::mutex mtx;
};
