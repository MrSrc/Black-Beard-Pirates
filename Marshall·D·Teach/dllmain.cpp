// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "core.h"

BOOL Setexp1 = FALSE;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
	if (Setexp1 == FALSE)
	{
		Setexp1 = TRUE;
		CreateThread
		SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)MyUnhandledExceptionFilter);
		DisableSetUnhandledExceptionFilter();
	}
    return TRUE;
}

