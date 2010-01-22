/*
 Copyright (C) 2009 Sun Microsystems, Inc.
 All rights reserved. Use is subject to license terms.

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; version 2 of the License.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/
/*
 * myjapi_A.hpp
 */

#ifndef myjapi_A_hpp
#define myjapi_A_hpp

#include "myjapi_classes.hpp"

// API to implement against
#include "myapi.hpp"

// libraries
#include "helpers.hpp"
#include "jtie.hpp"

// The API stub functions in this file have mangled names that adhere
// to the JVM specification.  It is not necessary to include the
// function prototypes generated by the javah tool from the Java source,
//   #include "myjapi_A.h"
// if they are declared to receive "C" linkage here.
extern "C" {

// ---------------------------------------------------------------------------
// API JNI function stubs
// ---------------------------------------------------------------------------

JNIEXPORT jobject JNICALL
Java_myjapi_A_create_1r__(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_A_create_1r__(JNIEnv *, jclass)");
    return gcreate< ttrait_myjapi_A_r >(env, cls);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_create_1r__I(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jobject Java_myjapi_A_create_1r__I(JNIEnv *, jclass, jint)");
    return gcreate< ttrait_myjapi_A_r, ttrait_int32 >(env, cls, p0);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_create_1p__(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_A_create_1p__(JNIEnv *, jclass)");
    return gcreate< ttrait_myjapi_A_p >(env, cls);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_create_1p__I(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("jobject Java_myjapi_A_create_1p__I(JNIEnv *, jclass, jint)");
    return gcreate< ttrait_myjapi_A_p, ttrait_int32 >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_delete_1r(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_delete_1r(JNIEnv *, jclass, jobject)");
    gdelete< ttrait_myjapi_A_r >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_delete_1p(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_delete_1p(JNIEnv *, jclass, jobject)");
    gdelete< ttrait_myjapi_A_p >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_f0s(JNIEnv * env, jclass cls) 
{
    TRACE("jint Java_myjapi_A_f0s(JNIEnv *, jclass)");
    return gcall< ttrait_int32, &A::f0s >(env, cls);
    //return 10;
}

JNIEXPORT jint JNICALL
Java_myjapi_A_f0n(JNIEnv * env, jclass cls, jobject obj)
{
    TRACE("jint Java_myjapi_A_f0n(JNIEnv *, jclass, jobject)");
    (void)cls; return gcall< ttrait_myjapi_A_ct, ttrait_int32, &A::f0n >(env, obj);
    //return 11;
}

JNIEXPORT jint JNICALL
Java_myjapi_A_f0v(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_A_f0v(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_A_ct, ttrait_int32, &A::f0v >(env, obj);
    //return 12;
}

JNIEXPORT jint JNICALL
Java_myjapi_A_d0sc(JNIEnv * env, jclass cls)
{
    TRACE("jint Java_myjapi_A_d0sc(JNIEnv *, jclass)");
    return gget< ttrait_int32_c, A::d0sc >(env, cls);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_d0s__(JNIEnv * env, jclass cls)
{
    TRACE("jint Java_myjapi_A_d0s__(JNIEnv *, jclass)");
    return gget< ttrait_int32, A::d0s >(env, cls);
}

JNIEXPORT void JNICALL
Java_myjapi_A_d0s__I(JNIEnv * env, jclass cls, jint p0)
{
    TRACE("void Java_myjapi_A_d0s__I(JNIEnv *, jclass, jint)");
    gset< ttrait_int32, A::d0s >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_d0c(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_A_d0c(JNIEnv *, jobject)");
    return gget< ttrait_myjapi_A_t, ttrait_int32_c, &A::d0c >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_d0__(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_A_d0__(JNIEnv *, jobject)");
    return gget< ttrait_myjapi_A_t, ttrait_int32, &A::d0 >(env, obj);
}

JNIEXPORT void JNICALL
Java_myjapi_A_d0__I(JNIEnv * env, jobject obj, jint p0)
{
    TRACE("void Java_myjapi_A_d0__I(JNIEnv *, jobject, jint)");
    return gset< ttrait_myjapi_A_t, ttrait_int32, &A::d0 >(env, obj, p0);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_newB0(JNIEnv * env, jobject obj)
{
    TRACE("jobject Java_myjapi_A_newB0(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_A_ct, ttrait_myjapi_B0_p, &A::newB0 >(env, obj);
    //return 0;
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_newB1(JNIEnv * env, jobject obj)
{
    TRACE("jobject Java_myjapi_A_newB1(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_A_ct, ttrait_myjapi_B1_p, &A::newB1 >(env, obj);
    //return 0;
}

JNIEXPORT void JNICALL
Java_myjapi_A_del__Lmyjapi_B0_2(JNIEnv * env, jobject obj, jobject p0)
{
    TRACE("Java_myjapi_A_del__Lmyjapi_B0_2(JNIEnv *, jobject, jobject)");
    gcall< ttrait_myjapi_A_t, ttrait_myjapi_B0_r, &A::del >(env, obj, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_del__Lmyjapi_B1_2(JNIEnv * env, jobject obj, jobject p0)
{
    TRACE("Java_myjapi_A_del__Lmyjapi_B1_2(JNIEnv *, jobject, jobject)");
    gcall< ttrait_myjapi_A_t, ttrait_myjapi_B1_r, &A::del >(env, obj, p0);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_deliver_1ptr(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_A_deliver_1ptr(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_A_p, &A::deliver_ptr >(env, cls);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_deliver_1null_1ptr(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_A_deliver_1null_1ptr(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_A_p, &A::deliver_null_ptr >(env, cls);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_deliver_1ref(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_A_deliver_1ref(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_A_r, &A::deliver_ref >(env, cls);
}

JNIEXPORT jobject JNICALL
Java_myjapi_A_deliver_1null_1ref(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_A_deliver_1null_1ref(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_A_r, &A::deliver_null_ref >(env, cls);
}

JNIEXPORT void JNICALL
Java_myjapi_A_take_1ptr(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_take_1ptr(JNIEnv *, jclass, jobject)");
    gcall< ttrait_myjapi_A_p, &A::take_ptr >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_take_1null_1ptr(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_take_1null_1ptr(JNIEnv *, jclass, jobject)");
    gcall< ttrait_myjapi_A_p, &A::take_null_ptr >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_take_1ref(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_take_1ref(JNIEnv *, jclass, jobject)");
    gcall< ttrait_myjapi_A_r, &A::take_ref >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_take_1null_1ref(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_take_1null_1ref(JNIEnv *, jclass, jobject)");
    gcall< ttrait_myjapi_A_r, &A::take_null_ref >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_print(JNIEnv * env, jclass cls, jobject p0)
{
    TRACE("void Java_myjapi_A_print(JNIEnv *, jclass, jobject)");
    gcall< ttrait_myjapi_A_p, &A::print >(env, cls, p0);
}

// ---------------------------------------------------------------------------

JNIEXPORT void JNICALL
Java_myjapi_A_h0(JNIEnv * env, jclass cls)
{
    TRACE("void Java_myjapi_A_h0(JNIEnv *, jclass)");
    gcall< &h0 >(env, cls);
}

JNIEXPORT void JNICALL
Java_myjapi_A_h1(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("void Java_myjapi_A_h1(JNIEnv *, jclass, jbyte)");
    gcall< ttrait_int8, &h1 >(env, cls, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_h2(JNIEnv * env, jclass cls, jbyte p0, jshort p1)
{
    TRACE("void Java_myjapi_A_h2(JNIEnv *, jclass, jbyte, jshort)");
    gcall< ttrait_int8, ttrait_int16, &h2 >(env, cls, p0, p1);
}

JNIEXPORT void JNICALL
Java_myjapi_A_h3(JNIEnv * env, jclass cls, jbyte p0, jshort p1, jint p2)
{
    TRACE("void Java_myjapi_A_h3(JNIEnv *, jclass, jbyte, jshort, jint)");
    gcall< ttrait_int8, ttrait_int16, ttrait_int32, &h3 >(env, cls, p0, p1, p2);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_h0r(JNIEnv * env, jclass cls)
{
    TRACE("jint Java_myjapi_A_h0r(JNIEnv *, jclass)");
    return gcall< ttrait_int32, &h0r >(env, cls);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_h1r(JNIEnv * env, jclass cls, jbyte p0)
{
    TRACE("jint Java_myjapi_A_h1r(JNIEnv *, jclass, jbyte)");
    return gcall< ttrait_int32, ttrait_int8, &h1r >(env, cls, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_h2r(JNIEnv * env, jclass cls, jbyte p0, jshort p1)
{
    TRACE("jint Java_myjapi_A_h2r(JNIEnv *, jclass, jbyte, jshort)");
    return gcall< ttrait_int32, ttrait_int8, ttrait_int16, &h2r >(env, cls, p0, p1);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_h3r(JNIEnv * env, jclass cls, jbyte p0, jshort p1, jint p2)
{
    TRACE("jint Java_myjapi_A_h3r(JNIEnv *, jclass, jbyte, jshort, jint)");
    return gcall< ttrait_int32, ttrait_int8, ttrait_int16, ttrait_int32, &h3r >(env, cls, p0, p1, p2);
}

// ---------------------------------------------------------------------------

JNIEXPORT void JNICALL
Java_myjapi_A_g0c(JNIEnv * env, jobject obj)
{
    TRACE("void Java_myjapi_A_g0c(JNIEnv *, jobject)");
    gcall< ttrait_myjapi_A_ct, &A::g0c >(env, obj);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g1c(JNIEnv * env, jobject obj, jbyte p0)
{
    TRACE("void Java_myjapi_A_g1c(JNIEnv *, jobject, jbyte)");
    gcall< ttrait_myjapi_A_ct, ttrait_int8, &A::g1c >(env, obj, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g2c(JNIEnv * env, jobject obj, jbyte p0, jshort p1)
{
    TRACE("void Java_myjapi_A_g2c(JNIEnv *, jobject, jbyte, jshort)");
    gcall< ttrait_myjapi_A_ct, ttrait_int8, ttrait_int16, &A::g2c >(env, obj, p0, p1);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g3c(JNIEnv * env, jobject obj, jbyte p0, jshort p1, jint p2)
{
    TRACE("void Java_myjapi_A_g3c(JNIEnv *, jobject, jbyte, jshort, jint)");
    gcall< ttrait_myjapi_A_ct, ttrait_int8, ttrait_int16, ttrait_int32, &A::g3c >(env, obj, p0, p1, p2);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g0(JNIEnv * env, jobject obj)
{
    TRACE("void Java_myjapi_A_g0(JNIEnv *, jobject)");
    gcall< ttrait_myjapi_A_t, &A::g0 >(env, obj);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g1(JNIEnv * env, jobject obj, jbyte p0)
{
    TRACE("void Java_myjapi_A_g1(JNIEnv *, jobject, jbyte)");
    gcall< ttrait_myjapi_A_t, ttrait_int8, &A::g1 >(env, obj, p0);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g2(JNIEnv * env, jobject obj, jbyte p0, jshort p1)
{
    TRACE("void Java_myjapi_A_g2(JNIEnv *, jobject, jbyte, jshort)");
    gcall< ttrait_myjapi_A_t, ttrait_int8, ttrait_int16, &A::g2 >(env, obj, p0, p1);
}

JNIEXPORT void JNICALL
Java_myjapi_A_g3(JNIEnv * env, jobject obj, jbyte p0, jshort p1, jint p2)
{
    TRACE("void Java_myjapi_A_g3(JNIEnv *, jobject, jbyte, jshort, jint)");
    gcall< ttrait_myjapi_A_t, ttrait_int8, ttrait_int16, ttrait_int32, &A::g3 >(env, obj, p0, p1, p2);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g0rc(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_A_g0rc(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_A_ct, ttrait_int32, &A::g0rc >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g1rc(JNIEnv * env, jobject obj, jbyte p0)
{
    TRACE("jint Java_myjapi_A_g1rc(JNIEnv *, jobject, jbyte)");
    return gcall< ttrait_myjapi_A_ct, ttrait_int32, ttrait_int8, &A::g1rc >(env, obj, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g2rc(JNIEnv * env, jobject obj, jbyte p0, jshort p1)
{
    TRACE("jint Java_myjapi_A_g2rc(JNIEnv *, jobject, jbyte, jshort)");
    return gcall< ttrait_myjapi_A_ct, ttrait_int32, ttrait_int8, ttrait_int16, &A::g2rc >(env, obj, p0, p1);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g3rc(JNIEnv * env, jobject obj, jbyte p0, jshort p1, jint p2)
{
    TRACE("jint Java_myjapi_A_g3rc(JNIEnv *, jobject, jbyte, jshort, jint)");
    return gcall< ttrait_myjapi_A_ct, ttrait_int32, ttrait_int8, ttrait_int16, ttrait_int32, &A::g3rc >(env, obj, p0, p1, p2);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g0r(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_A_g0r(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_A_t, ttrait_int32, &A::g0r >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g1r(JNIEnv * env, jobject obj, jbyte p0)
{
    TRACE("jint Java_myjapi_A_g1r(JNIEnv *, jobject, jbyte)");
    return gcall< ttrait_myjapi_A_t, ttrait_int32, ttrait_int8, &A::g1r >(env, obj, p0);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g2r(JNIEnv * env, jobject obj, jbyte p0, jshort p1)
{
    TRACE("jint Java_myjapi_A_g2r(JNIEnv *, jobject, jbyte, jshort)");
    return gcall< ttrait_myjapi_A_t, ttrait_int32, ttrait_int8, ttrait_int16, &A::g2r >(env, obj, p0, p1);
}

JNIEXPORT jint JNICALL
Java_myjapi_A_g3r(JNIEnv * env, jobject obj, jbyte p0, jshort p1, jint p2)
{
    TRACE("jint Java_myjapi_A_g3r(JNIEnv *, jobject, jbyte, jshort, jint)");
    return gcall< ttrait_myjapi_A_t, ttrait_int32, ttrait_int8, ttrait_int16, ttrait_int32, &A::g3r >(env, obj, p0, p1, p2);
}

// ---------------------------------------------------------------------------

} // extern "C"

#endif // myjapi_A_hpp
