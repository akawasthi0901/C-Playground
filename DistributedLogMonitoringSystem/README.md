# Distributed Log Monitoring System  

## 📌 Overview  
The **Distributed Log Monitoring System** is a **C++20 project** designed to efficiently monitor and process log data in real-time.  
It demonstrates the use of **modern C++ features**, **multithreading**, and **design patterns** to build a scalable, event-driven system.  

This project is part of the **CPP-Playground** repo, showcasing **clean architecture** and **production-ready C++ code**.  

---

## ✨ Features  
- **Multithreading & Concurrency**  
  - Log producers and consumers run in parallel using `std::thread`.  
- **Thread-Safe Queue (Producer-Consumer Model)**  
  - Handles multiple log sources safely using `std::mutex` and `std::condition_variable`.  
- **Design Patterns**  
  - **Singleton**: Centralized log manager.  
  - **Observer**: Event-driven updates when new logs arrive.  
- **Error Handling**  
  - Graceful handling of invalid/malformed log entries.  
- **Modular Architecture**  
  - Separate `src/`, `include/`, and `build/` directories for clean organization.  

---
