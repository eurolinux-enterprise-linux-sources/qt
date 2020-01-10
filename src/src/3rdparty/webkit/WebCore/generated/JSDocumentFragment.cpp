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
#include "JSDocumentFragment.h"

#include "DocumentFragment.h"
#include "Element.h"
#include "JSElement.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDocumentFragment);

/* Hash table */

static const HashTableValue JSDocumentFragmentTableValues[2] =
{
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsDocumentFragmentConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSDocumentFragmentTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSDocumentFragmentTableValues, 0 };
#else
    { 2, 1, JSDocumentFragmentTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSDocumentFragmentConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSDocumentFragmentConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSDocumentFragmentConstructorTableValues, 0 };
#else
    { 1, 0, JSDocumentFragmentConstructorTableValues, 0 };
#endif

class JSDocumentFragmentConstructor : public DOMConstructorObject {
public:
    JSDocumentFragmentConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSDocumentFragmentConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSDocumentFragmentPrototype::self(exec, globalObject), None);
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

const ClassInfo JSDocumentFragmentConstructor::s_info = { "DocumentFragmentConstructor", 0, &JSDocumentFragmentConstructorTable, 0 };

bool JSDocumentFragmentConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentFragmentConstructor, DOMObject>(exec, &JSDocumentFragmentConstructorTable, this, propertyName, slot);
}

bool JSDocumentFragmentConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDocumentFragmentConstructor, DOMObject>(exec, &JSDocumentFragmentConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDocumentFragmentPrototypeTableValues[3] =
{
    { "querySelector", DontDelete|Function, (intptr_t)jsDocumentFragmentPrototypeFunctionQuerySelector, (intptr_t)1 },
    { "querySelectorAll", DontDelete|Function, (intptr_t)jsDocumentFragmentPrototypeFunctionQuerySelectorAll, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSDocumentFragmentPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSDocumentFragmentPrototypeTableValues, 0 };
#else
    { 4, 3, JSDocumentFragmentPrototypeTableValues, 0 };
#endif

const ClassInfo JSDocumentFragmentPrototype::s_info = { "DocumentFragmentPrototype", 0, &JSDocumentFragmentPrototypeTable, 0 };

JSObject* JSDocumentFragmentPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDocumentFragment>(exec, globalObject);
}

bool JSDocumentFragmentPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDocumentFragmentPrototypeTable, this, propertyName, slot);
}

bool JSDocumentFragmentPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDocumentFragmentPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDocumentFragment::s_info = { "DocumentFragment", &JSNode::s_info, &JSDocumentFragmentTable, 0 };

JSDocumentFragment::JSDocumentFragment(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<DocumentFragment> impl)
    : JSNode(structure, globalObject, impl)
{
}

JSObject* JSDocumentFragment::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDocumentFragmentPrototype(JSDocumentFragmentPrototype::createStructure(JSNodePrototype::self(exec, globalObject)));
}

bool JSDocumentFragment::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentFragment, Base>(exec, &JSDocumentFragmentTable, this, propertyName, slot);
}

bool JSDocumentFragment::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDocumentFragment, Base>(exec, &JSDocumentFragmentTable, this, propertyName, descriptor);
}

JSValue jsDocumentFragmentConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSDocumentFragment* domObject = static_cast<JSDocumentFragment*>(asObject(slot.slotBase()));
    return JSDocumentFragment::getConstructor(exec, domObject->globalObject());
}
JSValue JSDocumentFragment::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDocumentFragmentConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionQuerySelector(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSDocumentFragment::s_info))
        return throwError(exec, TypeError);
    JSDocumentFragment* castedThisObj = static_cast<JSDocumentFragment*>(asObject(thisValue));
    DocumentFragment* imp = static_cast<DocumentFragment*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->querySelector(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsDocumentFragmentPrototypeFunctionQuerySelectorAll(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSDocumentFragment::s_info))
        return throwError(exec, TypeError);
    JSDocumentFragment* castedThisObj = static_cast<JSDocumentFragment*>(asObject(thisValue));
    DocumentFragment* imp = static_cast<DocumentFragment*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& selectors = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->querySelectorAll(selectors, ec)));
    setDOMException(exec, ec);
    return result;
}


}
