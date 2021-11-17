#include <iostream>
#include <windows.h>
#include <memory.h>
#include <conio.h>

int main()
{
  MEMORYSTATUS MemStat;

  // Zero structure
  memset(&MemStat, 0, sizeof(MemStat));

  // Get RAM snapshot
  ::GlobalMemoryStatus(&MemStat);

  // Print results
  std::cout << "Length of structure: " << MemStat.dwLength
            << std::endl
            << "Memory usage: " << MemStat.dwMemoryLoad
            << " %" << std::endl
            << "Physical memory: " << MemStat.dwTotalPhys / 1024
            << " KB" << std::endl
            << "Free physical memory: " << MemStat.dwAvailPhys / 1024
            << " KB" << std::endl
            << "Paging file: " << MemStat.dwTotalPageFile / 1024
            << " KB" << std::endl
            << "Free paging file: " << MemStat.dwAvailPageFile / 1024
            << " KB" << std::endl
            << "Virtual memory: " << MemStat.dwTotalVirtual / 1024
            << " KB" << std::endl
            << "Free virtual memory: " << MemStat.dwAvailVirtual / 1024
            << " KB" << std::endl;

  // Wait for keystroke
  _getch();

  return 0;
}
