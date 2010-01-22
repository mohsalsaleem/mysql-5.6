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
 * myjapi_D.hpp
 */

#ifndef myjapi_D_hpp
#define myjapi_D_hpp

#include "myjapi_classes.hpp"

// API to implement against
#include "myapi.hpp"

// libraries
#include "helpers.hpp"
#include "jtie.hpp"

// The API stub functions in this file have mangled names that adhere
// to the JVM specification.  It is not necessary to include the
// function prototypes generated by the javah tool from the Java source,
//   #include "myjapi_D0.h"
//   #include "myjapi_D1.h"
//   #include "myjapi_D2.h"
// if they are declared to receive "C" linkage here.
extern "C" {

// ---------------------------------------------------------------------------
// API JNI function stubs
// ---------------------------------------------------------------------------

JNIEXPORT jint JNICALL
Java_myjapi_D0_f_1d0(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_D0_f_1d0(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_D0_t, ttrait_int32, &D0::f_d0 >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_D0_f_1nv(JNIEnv * env, jclass cls, jobject obj)
{
    TRACE("jint Java_myjapi_D0_f_1nv(JNIEnv *, jclass, jobject)");
    (void)cls; return gcall< ttrait_myjapi_D0_t, ttrait_int32, &D0::f_nv >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_D0_f_1v(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_D0_f_1v(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_D0_t, ttrait_int32, &D0::f_v >(env, obj);
}

JNIEXPORT jobject JNICALL
Java_myjapi_D0_sub(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_D0_sub(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_D1_p, &D0::sub >(env, cls);
}

JNIEXPORT jint JNICALL
Java_myjapi_D1_f_1d1(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_D1_f_1d1(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_D1_t, ttrait_int32, &D1::f_d1 >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_D1_f_1nv(JNIEnv * env, jclass cls, jobject obj)
{
    TRACE("jint Java_myjapi_D1_f_1nv(JNIEnv *, jclass, jobject)");
    (void)cls; return gcall< ttrait_myjapi_D1_t, ttrait_int32, &D1::f_nv >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_D1_f_1v(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_D1_f_1v(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_D1_t, ttrait_int32, &D1::f_v >(env, obj);
}

JNIEXPORT jobject JNICALL
Java_myjapi_D1_sub(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_D1_sub(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_D1_p, &D1::sub >(env, cls);
}

JNIEXPORT jint JNICALL
Java_myjapi_D2_f_1d2(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_D2_f_1d2(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_D2_t, ttrait_int32, &D2::f_d2 >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_D2_f_1nv(JNIEnv * env, jclass cls, jobject obj)
{
    TRACE("jint Java_myjapi_D2_f_1nv(JNIEnv *, jclass, jobject)");
    (void)cls; return gcall< ttrait_myjapi_D2_t, ttrait_int32, &D2::f_nv >(env, obj);
}

JNIEXPORT jint JNICALL
Java_myjapi_D2_f_1v(JNIEnv * env, jobject obj)
{
    TRACE("jint Java_myjapi_D2_f_1v(JNIEnv *, jobject)");
    return gcall< ttrait_myjapi_D2_t, ttrait_int32, &D2::f_v >(env, obj);
}

JNIEXPORT jobject JNICALL
Java_myjapi_D2_sub(JNIEnv * env, jclass cls)
{
    TRACE("jobject Java_myjapi_D2_sub(JNIEnv *, jclass)");
    return gcall< ttrait_myjapi_D1_p, &D2::sub >(env, cls);
}

// ---------------------------------------------------------------------------

} // extern "C"

#endif // myjapi_D_hpp
