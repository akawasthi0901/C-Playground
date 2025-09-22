#include "AlertManager.hpp"
#include <iostream>

void AlertManager::checkForAlerts(const std::vector<LogEntry>& logs) {
    for (const auto& log : logs) {
        if (log.level == "ERROR") {
            std::cout << "ALERT: Error detected at " << log.timestamp << ": " << log.message << "\n";
        }
    }
}
