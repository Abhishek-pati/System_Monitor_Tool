#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H

#include <string>
#include <vector>

using namespace std;

struct CPUData {
    unsigned long long user, nice, system, idle;
    unsigned long long total, active;
};

struct MemoryInfo {
    long totalMem;
    long freeMem;
    long availableMem;
};

struct ProcessInfo {
    int pid;
    string user;
    string command;
    float cpuPercent;
    float memPercent;
    unsigned long memUsage;
    char state;
};

CPUData readCPUStats();
MemoryInfo readMemoryInfo();
double getUptime();
vector<int> getProcessPIDs();
ProcessInfo readProcessInfo(int pid);
string getProcessUser(int pid);
void sortProcesses(vector<ProcessInfo>&, int);

#endif
