// dllmain.cpp : Defines the entry point for the DLL application.


#include "Addresses.h"
#include "pch.h"
#include <Windows.h>



auto __stdcall DllMain( void*, std::uint32_t, void*) 
{
    DWORD non{};
    VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, &non);
    *(BYTE*)(&FreeConsole) = 0xC3;
    AllocConsole();
    SetConsoleTitleA("Dfshploit console");
    freopen("CONOUT$", "w", stdout);
    freopen("CONIN", "r", stdin);
    SetWindowPos(GetConsoleWindow(), HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    ShowWindow(GetConsoleWindow(), SW_SHOW);

    const char* msg{};

    msg = R"ms(
________  ____________________ ___ _____________.____    ________  .______________
\______ \ \_   _____/   _____//   |   \______   \    |   \_____  \ |   \__    ___/
 |    |  \ |    __) \_____  \/    ~    \     ___/    |    /   |   \|   | |    |   
 |    `   \|     \  /        \    Y    /    |   |    |___/    |    \   | |    |   
/_______  /\___  / /_______  /\___|_  /|____|   |_______ \_______  /___| |____|   
        \/     \/          \/       \/                  \/       \/               
        )ms";
    printf(msg);
    printf("\n[INFO] welcome to Dfshploit.dll\n");
    return true;
}

