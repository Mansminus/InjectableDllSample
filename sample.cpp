#include <windows.h>
#define address 0x000000

void changeAddressValue()
{
    int *pointer;
    pointer = (int *)address; //pass address to pointer
    *pointer = 1337; // set the new value to the pointer
}

BOOL WINAPI DllMain(HINSTANCE hinstDll, DWORD Reason, LPVOID Reserved)
{
    switch (Reason)
    {
    case DLL_PROCESS_ATTACH:
        // code will be executed when the dll file gets injected into the other process
        MessageBoxA(MB_OK, "The process has been attached", "DLL_PROCESS_ATTACH", MB_ICONWARNING);
        break;
    case DLL_PROCESS_DETACH:
        // code will be executed  when the program gets detached, like when the process gets killed
        MessageBoxA(MB_OK, "DLL_PROCESS_DETACH", "The process has been detached", MB_ICONWARNING);
        break;
    }
    return TRUE;
}