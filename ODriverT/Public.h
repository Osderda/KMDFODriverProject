/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_ODriverT,
    0xa7c2b3aa,0x2e82,0x42a5,0xae,0x94,0x25,0x56,0x47,0xf8,0xf3,0xbb);
// {a7c2b3aa-2e82-42a5-ae94-255647f8f3bb}
