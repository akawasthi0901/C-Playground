#include "LogAggregator.hpp"

void LogAggregator::addLogs(const std::vector<LogEntry>& logs) {
    std::lock_guard<std::mutex> lock(mtx);
    allLogs.insert(allLogs.end(), logs.begin(), logs.end());
}

std::vector<LogEntry> LogAggregator::getLogsByLevel(const std::string& level) {
    std::lock_guard<std::mutex> lock(mtx);
    std::vector<LogEntry> result;
    for (const auto& log : allLogs) {
        if (log.level == level) result.push_back(log);
    }
    return result;
}
