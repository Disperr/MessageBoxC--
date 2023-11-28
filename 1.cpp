
#include <windows.h>

void main()
{
    HWND hWnd = GetForegroundWindow();
    ShowWindow(hWnd, SW_HIDE);//Прячем консоль
    //Светим меседжбокс
    MessageBox(hWnd, L"Message text", L"Caption text", MB_OK);
}

