#pragma once
#include "LogAggregator.hpp"
#include <string>

class AlertManager {
public:
    void checkForAlerts(const std::vector<LogEntry>& logs);
};
