/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _punycode_base_H_
#define _punycode_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs {

class punycode_base : public object_base {
    DECLARE_CLASS(punycode_base);

public:
    // punycode_base
    static result_t encode(exlib::string domain, exlib::string& retVal);
    static result_t decode(exlib::string domain, exlib::string& retVal);

public:
    static void s__new(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        CONSTRUCT_INIT();

        Isolate* isolate = Isolate::current();

        isolate->m_isolate->ThrowException(
            isolate->NewString("not a constructor"));
    }

public:
    static void s_encode(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_decode(const v8::FunctionCallbackInfo<v8::Value>& args);
};
}

namespace fibjs {
inline ClassInfo& punycode_base::class_info()
{
    static ClassData::ClassMethod s_method[] = {
        { "encode", s_encode, true },
        { "decode", s_decode, true }
    };

    static ClassData s_cd = {
        "punycode", true, s__new, NULL,
        ARRAYSIZE(s_method), s_method, 0, NULL, 0, NULL, NULL, NULL,
        &object_base::class_info()
    };

    static ClassInfo s_ci(s_cd);
    return s_ci;
}

inline void punycode_base::s_encode(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    exlib::string vr;

    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(exlib::string, 0);

    hr = encode(v0, vr);

    METHOD_RETURN();
}

inline void punycode_base::s_decode(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    exlib::string vr;

    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(exlib::string, 0);

    hr = decode(v0, vr);

    METHOD_RETURN();
}
}

#endif
