#include "LogParser.hpp"
#include "LogAggregator.hpp"
#include "AlertManager.hpp"
#include <thread>
#include <iostream>

int main() {
    LogParser parser;
    LogAggregator aggregator;
    AlertManager alertManager;

    // Parse logs
    auto logs = parser.parse("logs/sample.log");

    // Add logs to aggregator
    aggregator.addLogs(logs);

    // Check for ERROR logs
    auto errorLogs = aggregator.getLogsByLevel("ERROR");

    // Trigger alerts
    if (!errorLogs.empty()) {
        alertManager.checkForAlerts(errorLogs);
    } else {
        std::cout << "[Info] No ERROR logs found.\n";
    }

    std::cout << "Log Monitoring Completed.\n";
    return 0;
}
