#pragma warning (disable : 4100)

#include "ODriver.h"
#include "messages.h"
NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObjectT, PUNICODE_STRING pRegistryPath){
	pDriverObjectT->DriverUnload = UnloadDriver;
	DbgPrintEx(0, 0, "Message!");
	DebugMessage("Hello! I'm Osderda KMDF Driver Test Project!");
	return STATUS_SUCCESS;
}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject) {
	DebugMessage("Page Rake says goodbye!");
	return STATUS_SUCCESS;
}


