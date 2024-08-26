#pragma once
#include <Memory/hProcess.h>

namespace Flags
{
    // menu flags;
    inline bool isRunning = true;

    // cheats flags;
    inline bool enableAimbot = true;
    inline bool enableEsp = true;
}

namespace process_info
{
    Process processName = L"notepad.exe";
    Module moduleName = L"client.dll";

    inline DWORD procID = ProcessManager::GetProcessID(processName);
    inline uintptr_t clientAddress = ProcessManager::GetModuleBaseAddress(procID, moduleName);
}
