// This file was generated based on '/Users/Omkareshwar/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.1.1/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface IGesture :515
// {
uInterfaceType* IGesture_typeof();

struct IGesture
{
    void(*fp_OnCapture)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*);
    void(*fp_OnLostCapture)(uObject*, bool*);
    void(*fp_OnPointerMoved)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*);
    void(*fp_OnPointerPressed)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*);
    void(*fp_OnPointerReleased)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*);
    void(*fp_get_Priority)(uObject*, int*);
    void(*fp_get_PriorityAdjustment)(uObject*, int*);
    void(*fp_get_Significance)(uObject*, float*);
    static void OnCapture(const uInterface& __this, ::g::Fuse::Input::PointerEventArgs* args, int how) { __this.VTable<IGesture>()->fp_OnCapture(__this, args, &how); }
    static void OnLostCapture(const uInterface& __this, bool forced) { __this.VTable<IGesture>()->fp_OnLostCapture(__this, &forced); }
    static int OnPointerMoved(const uInterface& __this, ::g::Fuse::Input::PointerMovedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerMoved(__this, args, &__retval), __retval; }
    static int OnPointerPressed(const uInterface& __this, ::g::Fuse::Input::PointerPressedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerPressed(__this, args, &__retval), __retval; }
    static int OnPointerReleased(const uInterface& __this, ::g::Fuse::Input::PointerReleasedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerReleased(__this, args, &__retval), __retval; }
    static int Priority(const uInterface& __this) { int __retval; return __this.VTable<IGesture>()->fp_get_Priority(__this, &__retval), __retval; }
    static int PriorityAdjustment(const uInterface& __this) { int __retval; return __this.VTable<IGesture>()->fp_get_PriorityAdjustment(__this, &__retval), __retval; }
    static float Significance(const uInterface& __this) { float __retval; return __this.VTable<IGesture>()->fp_get_Significance(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Input
