// This file was generated based on /Users/Omkareshwar/Downloads/exploring/.uno/ux11/exploring.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ExploreItem.h>
#include <_root.exploring_accessor_ExploreItem_ImageName.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class exploring_accessor_ExploreItem_ImageName :11
// {
// static exploring_accessor_ExploreItem_ImageName() :11
static void exploring_accessor_ExploreItem_ImageName__cctor__fn(uType* __type)
{
    exploring_accessor_ExploreItem_ImageName::Singleton_ = exploring_accessor_ExploreItem_ImageName::New1();
    exploring_accessor_ExploreItem_ImageName::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"ImageName"*/]);
}

static void exploring_accessor_ExploreItem_ImageName_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageName");
    ::TYPES[0] = ::g::ExploreItem_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::exploring_accessor_ExploreItem_ImageName::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::exploring_accessor_ExploreItem_ImageName::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* exploring_accessor_ExploreItem_ImageName_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(exploring_accessor_ExploreItem_ImageName);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("exploring_accessor_ExploreItem_ImageName", options);
    type->fp_build_ = exploring_accessor_ExploreItem_ImageName_build;
    type->fp_ctor_ = (void*)exploring_accessor_ExploreItem_ImageName__New1_fn;
    type->fp_cctor_ = exploring_accessor_ExploreItem_ImageName__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))exploring_accessor_ExploreItem_ImageName__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))exploring_accessor_ExploreItem_ImageName__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))exploring_accessor_ExploreItem_ImageName__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))exploring_accessor_ExploreItem_ImageName__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))exploring_accessor_ExploreItem_ImageName__get_SupportsOriginSetter_fn;
    return type;
}

// public generated exploring_accessor_ExploreItem_ImageName() :11
void exploring_accessor_ExploreItem_ImageName__ctor_1_fn(exploring_accessor_ExploreItem_ImageName* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void exploring_accessor_ExploreItem_ImageName__GetAsObject_fn(exploring_accessor_ExploreItem_ImageName* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->ImageName(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void exploring_accessor_ExploreItem_ImageName__get_Name_fn(exploring_accessor_ExploreItem_ImageName* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = exploring_accessor_ExploreItem_ImageName::_name(), void();
}

// public generated exploring_accessor_ExploreItem_ImageName New() :11
void exploring_accessor_ExploreItem_ImageName__New1_fn(exploring_accessor_ExploreItem_ImageName** __retval)
{
    *__retval = exploring_accessor_ExploreItem_ImageName::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void exploring_accessor_ExploreItem_ImageName__get_PropertyType_fn(exploring_accessor_ExploreItem_ImageName* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void exploring_accessor_ExploreItem_ImageName__SetAsObject_fn(exploring_accessor_ExploreItem_ImageName* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetImageName(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void exploring_accessor_ExploreItem_ImageName__get_SupportsOriginSetter_fn(exploring_accessor_ExploreItem_ImageName* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector exploring_accessor_ExploreItem_ImageName::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> exploring_accessor_ExploreItem_ImageName::Singleton_;

// public generated exploring_accessor_ExploreItem_ImageName() [instance] :11
void exploring_accessor_ExploreItem_ImageName::ctor_1()
{
    ctor_();
}

// public generated exploring_accessor_ExploreItem_ImageName New() [static] :11
exploring_accessor_ExploreItem_ImageName* exploring_accessor_ExploreItem_ImageName::New1()
{
    exploring_accessor_ExploreItem_ImageName* obj1 = (exploring_accessor_ExploreItem_ImageName*)uNew(exploring_accessor_ExploreItem_ImageName_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
