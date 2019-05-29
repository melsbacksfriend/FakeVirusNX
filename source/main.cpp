#include <iostream>
#include <switch.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    while (appletMainLoop())
    {
    consoleInit(NULL);
    int A = 0;
    std::cout << "Formatting PRODINFO to NTFS" << std::endl;
    
    for(A = 0; A < 60000; A = A + 5) {

    

        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

    if (A == 1800) std::cout << "Done! Now you should reboot.  " << std::endl;

        if (kDown & KEY_PLUS)
            break; 

        consoleUpdate(NULL);
}
    }
    consoleExit(NULL);
    return 0;
}
