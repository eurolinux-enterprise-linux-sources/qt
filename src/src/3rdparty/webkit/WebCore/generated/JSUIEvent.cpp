/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSUIEvent.h"

#include "DOMWindow.h"
#include "JSDOMWindow.h"
#include "UIEvent.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSUIEvent);

/* Hash table */

static const HashTableValue JSUIEventTableValues[11] =
{
    { "view", DontDelete|ReadOnly, (intptr_t)jsUIEventView, (intptr_t)0 },
    { "detail", DontDelete|ReadOnly, (intptr_t)jsUIEventDetail, (intptr_t)0 },
    { "keyCode", DontDelete|ReadOnly, (intptr_t)jsUIEventKeyCode, (intptr_t)0 },
    { "charCode", DontDelete|ReadOnly, (intptr_t)jsUIEventCharCode, (intptr_t)0 },
    { "layerX", DontDelete|ReadOnly, (intptr_t)jsUIEventLayerX, (intptr_t)0 },
    { "layerY", DontDelete|ReadOnly, (intptr_t)jsUIEventLayerY, (intptr_t)0 },
    { "pageX", DontDelete|ReadOnly, (intptr_t)jsUIEventPageX, (intptr_t)0 },
    { "pageY", DontDelete|ReadOnly, (intptr_t)jsUIEventPageY, (intptr_t)0 },
    { "which", DontDelete|ReadOnly, (intptr_t)jsUIEventWhich, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsUIEventConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSUIEventTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSUIEventTableValues, 0 };
#else
    { 34, 31, JSUIEventTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSUIEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSUIEventConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSUIEventConstructorTableValues, 0 };
#else
    { 1, 0, JSUIEventConstructorTableValues, 0 };
#endif

class JSUIEventConstructor : public DOMConstructorObject {
public:
    JSUIEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSUIEventConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSUIEventPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSUIEventConstructor::s_info = { "UIEventConstructor", 0, &JSUIEventConstructorTable, 0 };

bool JSUIEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSUIEventConstructor, DOMObject>(exec, &JSUIEventConstructorTable, this, propertyName, slot);
}

bool JSUIEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSUIEventConstructor, DOMObject>(exec, &JSUIEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSUIEventPrototypeTableValues[2] =
{
    { "initUIEvent", DontDelete|Function, (intptr_t)jsUIEventPrototypeFunctionInitUIEvent, (intptr_t)5 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSUIEventPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSUIEventPrototypeTableValues, 0 };
#else
    { 2, 1, JSUIEventPrototypeTableValues, 0 };
#endif

const ClassInfo JSUIEventPrototype::s_info = { "UIEventPrototype", 0, &JSUIEventPrototypeTable, 0 };

JSObject* JSUIEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSUIEvent>(exec, globalObject);
}

bool JSUIEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSUIEventPrototypeTable, this, propertyName, slot);
}

bool JSUIEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSUIEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSUIEvent::s_info = { "UIEvent", &JSEvent::s_info, &JSUIEventTable, 0 };

JSUIEvent::JSUIEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<UIEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

JSObject* JSUIEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSUIEventPrototype(JSUIEventPrototype::createStructure(JSEventPrototype::self(exec, globalObject)));
}

bool JSUIEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSUIEvent, Base>(exec, &JSUIEventTable, this, propertyName, slot);
}

bool JSUIEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSUIEvent, Base>(exec, &JSUIEventTable, this, propertyName, descriptor);
}

JSValue jsUIEventView(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->view()));
}

JSValue jsUIEventDetail(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->detail());
}

JSValue jsUIEventKeyCode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->keyCode());
}

JSValue jsUIEventCharCode(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->charCode());
}

JSValue jsUIEventLayerX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->layerX());
}

JSValue jsUIEventLayerY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->layerY());
}

JSValue jsUIEventPageX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->pageX());
}

JSValue jsUIEventPageY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->pageY());
}

JSValue jsUIEventWhich(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* castedThis = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    UIEvent* imp = static_cast<UIEvent*>(castedThis->impl());
    return jsNumber(exec, imp->which());
}

JSValue jsUIEventConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSUIEvent* domObject = static_cast<JSUIEvent*>(asObject(slot.slotBase()));
    return JSUIEvent::getConstructor(exec, domObject->globalObject());
}
JSValue JSUIEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSUIEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsUIEventPrototypeFunctionInitUIEvent(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSUIEvent::s_info))
        return throwError(exec, TypeError);
    JSUIEvent* castedThisObj = static_cast<JSUIEvent*>(asObject(thisValue));
    UIEvent* imp = static_cast<UIEvent*>(castedThisObj->impl());
    const UString& type = args.at(0).toString(exec);
    bool canBubble = args.at(1).toBoolean(exec);
    bool cancelable = args.at(2).toBoolean(exec);
    DOMWindow* view = toDOMWindow(args.at(3));
    int detail = args.at(4).toInt32(exec);

    imp->initUIEvent(type, canBubble, cancelable, view, detail);
    return jsUndefined();
}


}
