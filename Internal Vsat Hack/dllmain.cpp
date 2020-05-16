#include<iostream>
#include<Windows.h>
#include "vsat.h"
#include "functions.h"

using namespace std;

int MainThread() {
    functions::EnableConsole();
    cout << "Dll injected" << endl;
    VSAT::run();
    return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
    return 0;
}