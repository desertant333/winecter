#include <iostream>
#include <windows.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdio> 
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <windows.h>  
#endif
    void enableANSI() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut != INVALID_HANDLE_VALUE) {
        DWORD dwMode = 0;
        if (GetConsoleMode(hOut, &dwMode)) {
            dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
            SetConsoleMode(hOut, dwMode);
        }
    }
    }


BOOL WINAPI ConsoleHandler(DWORD ctrlType) {
    if (ctrlType == CTRL_C_EVENT || ctrlType == CTRL_BREAK_EVENT || ctrlType == CTRL_CLOSE_EVENT) {
        return TRUE;
    }
    return FALSE;
}

void winecter() {
    SetConsoleCtrlHandler(ConsoleHandler, TRUE);
    HWND hwnd = GetConsoleWindow();
    if (hwnd != NULL) {
        LONG_PTR style = GetWindowLongPtr(hwnd, GWL_STYLE);
        style &= ~WS_SYSMENU;      
        style &= ~WS_MINIMIZEBOX;  
        style &= ~WS_MAXIMIZEBOX;  
        style &= ~WS_THICKFRAME;   
        SetWindowLongPtr(hwnd, GWL_STYLE, style);
    }  
}


    int main(){     winecter();
    SetConsoleTitleA("winecter");
    enableANSI();

    std::cout << "\x1B[95m Winecter testerka v1.1\x1B[0m\n";
    std::cout << "\x1B[90m version: 1.0.0.0\x1B[0m\n";
    std::cout << "\x1B[97m Initializating";
    Sleep(10);
    std::cout << "\x1B[1G Initializating.";
    Sleep(10);
    std::cout << "\x1B[1G Initializating..";
    Sleep(10);
    std::cout << "\x1B[1G Initializating...";
    Sleep(10);
    std::cout << "\x1B[1G Initializating....";
    Sleep(10);
    std::cout << "\x1B[1G Initializating.....";
    Sleep(10);
    std::cout << "\x1B[1G Initializating......";
    Sleep(10);
    std::cout << "\x1B[1G Initializating.......";
    Sleep(10);
    std::cout << "\x1B[1G Initializating........";
    Sleep(10);
    std::cout << "\x1B[1G Initializating.........";
    Sleep(10);
    std::cout << "\x1B[1G Initializating..........";
    Sleep(10);
    std::cout << "\x1B[1G Initializating...........";
    Sleep(10);
    std::cout << "\x1B[1G Initializating............";
    Sleep(10);
    std::cout << "\x1B[1G Initializating.............";
    Sleep(10);
    std::cout << "\x1B[1G Initializating..............";
    Sleep(10);
    std::cout << "\x1B[1G Initializating...............\x1B[32m Done.\x1B[97m\n";
    Sleep(10);

    std::cout << "\x1B[95m [Winecter] \x1B[97mStarting download from \"https://xdaforums.com/attachments/amonet-cronos-v1-1-4-zip.6351738/\"\n";
    std::cout << "\x1B[32m [";
        Sleep(120);
    std::cout << "\x1B[1G [#";
        Sleep(120);
    std::cout << "\x1B[1G [##";
        Sleep(120);
    std::cout << "\x1B[1G [###";
        Sleep(120);
    std::cout << "\x1B[1G [####";
        Sleep(120);
    std::cout << "\x1B[1G [#####";
        Sleep(120);
    std::cout << "\x1B[1G [######";
        Sleep(120);
    std::cout << "\x1B[1G [#######";
        Sleep(120);
    std::cout << "\x1B[1G [########";
        Sleep(120);
    std::cout << "\x1B[1G [#########";
        Sleep(120);
    std::cout << "\x1B[1G [##########";
        Sleep(120);
    std::cout << "\x1B[1G [###########";
        Sleep(120);
    std::cout << "\x1B[1G [############";
        Sleep(120);
    std::cout << "\x1B[1G [#############";
        Sleep(120);
    std::cout << "\x1B[1G[ ##############";
        Sleep(120);
    std::cout << "\x1B[1G [###############";
        Sleep(120);
    std::cout << "\x1B[1G [################";
        Sleep(120);
    std::cout << "\x1B[1G [#################";
        Sleep(120);
    std::cout << "\x1B[1G [##################";
        Sleep(120);
    std::cout << "\x1B[1G [###################";
        Sleep(120);
    std::cout << "\x1B[1G [####################";
        Sleep(120);
    std::cout << "\x1B[1G [#####################";
        Sleep(120);
    std::cout << "\x1B[1G [######################";
        Sleep(120);
    std::cout << "\x1B[1G [#######################]\x1B[0m\n";
        Sleep(1337);
    system(" \"%CD%\\winecter.pshdownload.dll\" ");

    std::cout << "\x1B[95m [Winecter] \x1B[97mUnpacking zip archive\n";
    std::cout << "\x1B[32m [";
        Sleep(120);
    std::cout << "\x1B[1G [#";
        Sleep(120);
    std::cout << "\x1B[1G [##";
        Sleep(120);
    std::cout << "\x1B[1G [###";
        Sleep(120);
    std::cout << "\x1B[1G [####";
        Sleep(120);
    std::cout << "\x1B[1G [#####";
        Sleep(120);
    std::cout << "\x1B[1G [######";
        Sleep(120);
    std::cout << "\x1B[1G [#######";
        Sleep(120);
    std::cout << "\x1B[1G [########";
        Sleep(120);
    std::cout << "\x1B[1G [#########";
        Sleep(120);
    std::cout << "\x1B[1G [##########";
        Sleep(120);
    std::cout << "\x1B[1G [###########";
        Sleep(120);
    std::cout << "\x1B[1G [############";
        Sleep(120);
    std::cout << "\x1B[1G [#############";
        Sleep(120);
    std::cout << "\x1B[1G [##############";
        Sleep(120);
    std::cout << "\x1B[1G [###############";
        Sleep(120);
    std::cout << "\x1B[1G [################";
        Sleep(120);
    std::cout << "\x1B[1G [#################";
        Sleep(120);
    std::cout << "\x1B[1G [##################";
        Sleep(120);
    std::cout << "\x1B[1G [###################";
        Sleep(120);
    std::cout << "\x1B[1G [####################";
        Sleep(120);
    std::cout << "\x1B[1G [#####################";
        Sleep(120);
    std::cout << "\x1B[1G [######################";
        Sleep(120);
    std::cout << "\x1B[1G [#######################]\x1B[0m\n";   
    system(" \"%CD%\\winecter.pshunpack.dll\" ");
    std::cout << "\x1B[32m Successfully installed and unpacked amonet.\x1B[0m";
    system("\n pause>nul");
    return 0;
}