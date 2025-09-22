#pragma once
#include <string>
#include <vector>
#include <mutex>

struct LogEntry {
    std::string timestamp;
    std::string level;
    std::string message;
};

class LogParser {
public:
    std::vector<LogEntry> parse(const std::string& filePath);
};
