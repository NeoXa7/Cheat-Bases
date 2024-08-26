#pragma once
#include <Memory/hProcess.h>

namespace process_info
{
    Process processName = L"Your_process_name.exe"; // replace your process name here;
    inline DWORD procID = ProcessManager::GetProcessID(L"cs2.exe");

    Module moduleName = L"your_module_name.dll"; // replace your module name here;
    inline uintptr_t clientAddress = ProcessManager::GetModuleBaseAddress(procID, L"client.dll");
}
