// This file was generated based on /Users/Omkareshwar/Downloads/exploring/.uno/ux11/exploring.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct exploring_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class exploring_FuseControlsTextControl_Value_Property :59
// {
::g::Uno::UX::Property1_type* exploring_FuseControlsTextControl_Value_Property_typeof();
void exploring_FuseControlsTextControl_Value_Property__ctor_3_fn(exploring_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void exploring_FuseControlsTextControl_Value_Property__Get1_fn(exploring_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void exploring_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, exploring_FuseControlsTextControl_Value_Property** __retval);
void exploring_FuseControlsTextControl_Value_Property__get_Object_fn(exploring_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void exploring_FuseControlsTextControl_Value_Property__Set1_fn(exploring_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void exploring_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(exploring_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct exploring_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static exploring_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g