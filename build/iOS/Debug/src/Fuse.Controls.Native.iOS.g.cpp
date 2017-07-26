// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.1.1/ios/$.uno
// ------------------------------------------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :147
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.1.1/ios/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract extern class LeafView :1309
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface1));
    type->SetFields(7);
}

::g::Fuse::Controls::Native::iOS::View_type* LeafView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::iOS::View_type);
    type = (::g::Fuse::Controls::Native::iOS::View_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :1311
void LeafView__ctor_4_fn(LeafView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_4(handle);
}

// protected LeafView(ObjC.Object handle) [instance] :1311
void LeafView::ctor_4(::g::ObjC::Object* handle)
{
    ctor_3(handle, true);
}
// }

// /Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.1.1/ios/$.uno
// ------------------------------------------------------------------------------------------------------

// internal static extern class NativeFocus :153
// {
// static NativeFocus() :153
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void RaiseFocusGained(ObjC.Object handle) :169
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :177
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void RaiseFocusGained(ObjC.Object handle) [static] :169
void NativeFocus::RaiseFocusGained(::g::ObjC::Object* handle)
{
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :177
void NativeFocus::RaiseFocusLost(::g::ObjC::Object* handle)
{
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}
// }

// /Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.1.1/ios/$.uno
// ------------------------------------------------------------------------------------------------------

// public enum UITouch.TouchPhase :994
uEnumType* UITouch__TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.UITouch.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

// /Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.1.1/ios/$.uno
// ------------------------------------------------------------------------------------------------------

// public abstract extern class View :3179
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(6,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _handle), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle) :3185
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_2(handle);
}

// protected View(ObjC.Object handle, bool isLeafView) :3187
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView)
{
    __this->ctor_3(handle, *isLeafView);
}

// public ObjC.Object get_Handle() :3181
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(ObjC.Object handle) [instance] :3185
void View::ctor_2(::g::ObjC::Object* handle)
{
    ctor_3(handle, false);
}

// protected View(ObjC.Object handle, bool isLeafView) [instance] :3187
void View::ctor_3(::g::ObjC::Object* handle, bool isLeafView)
{
    ctor_1(handle, isLeafView);
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance] :3181
::g::ObjC::Object* View::Handle()
{
    return _handle;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
