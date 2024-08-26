#include <Memory/hMemory.h>
#include <Maths/hColor.h>
#include <Globals/hGlobals.h>

HANDLE Memory::processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, process_info::procID);

void _cheat_InitProgram()
{
    if (Memory::processHandle == 0) {
        SetConsoleTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // red
        cerr << "processHandle not found Error: " << GetLastError() << endl;
        SetConsoleTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // white
    }

    // your Cheat logic here;
    
    
}

int main()
{
    ProcessManager::CheckProcess(process_info::procID, process_info::processName);
    ProcessManager::CheckBaseAddress(process_info::clientAddress);
    _cheat_InitProgram();
}
