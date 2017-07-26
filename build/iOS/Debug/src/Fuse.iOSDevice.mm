// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Common/1.1.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOSDevice.h>
#include <Fuse.iOSDevice.ScreenOrientation.h>
#include <Fuse.OSVersion.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{

// public static extern class iOSDevice :2255
// {
static void iOSDevice_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::OSVersion_typeof(), (uintptr_t)&::g::Fuse::iOSDevice::_osVersion_, uFieldFlagsStatic);
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// public static float2 CompensateForOrientation(float2 size) :2289
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation(*size);
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) :2277
void iOSDevice__GetiOSVersion_fn(int* major, int* minor, int* patch)
{
    iOSDevice::GetiOSVersion(major, minor, patch);
}

// private static bool IsLandscapeOrientation() :2305
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval)
{
    *__retval = iOSDevice::IsLandscapeOrientation();
}

// public static Fuse.OSVersion get_OperatingSystemVersion() :2266
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::OSVersion** __retval)
{
    *__retval = iOSDevice::OperatingSystemVersion();
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() :2286
void iOSDevice__get_Orientation_fn(int* __retval)
{
    *__retval = iOSDevice::Orientation();
}

uSStrong< ::g::Fuse::OSVersion*> iOSDevice::_osVersion_;

// public static float2 CompensateForOrientation(float2 size) [static] :2289
::g::Uno::Float2 iOSDevice::CompensateForOrientation(::g::Uno::Float2 size)
{
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Float2__New2(size.Y, size.X) : size;
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) [static] :2277
void iOSDevice::GetiOSVersion(int* major, int* minor, int* patch)
{
    @autoreleasepool
    {
        *major = (int)[[NSProcessInfo processInfo] operatingSystemVersion].majorVersion;
        *minor = (int)[[NSProcessInfo processInfo] operatingSystemVersion].minorVersion;
        *patch = (int)[[NSProcessInfo processInfo] operatingSystemVersion].patchVersion;
    }
    
}

// private static bool IsLandscapeOrientation() [static] :2305
bool iOSDevice::IsLandscapeOrientation()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [[UIApplication sharedApplication] statusBarOrientation];
        return (o == UIInterfaceOrientationLandscapeLeft || o == UIInterfaceOrientationLandscapeRight);
    }
    
}

// public static Fuse.OSVersion get_OperatingSystemVersion() [static] :2266
::g::Fuse::OSVersion* iOSDevice::OperatingSystemVersion()
{
    if (iOSDevice::_osVersion_ != NULL)
        return iOSDevice::_osVersion_;

    int major, minor, patch;
    iOSDevice::GetiOSVersion(&major, &minor, &patch);
    return iOSDevice::_osVersion_ = ::g::Fuse::OSVersion::New1(major, minor, patch);
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() [static] :2286
int iOSDevice::Orientation()
{
    return iOSDevice::IsLandscapeOrientation() ? 1 : 0;
}
// }

}} // ::g::Fuse
