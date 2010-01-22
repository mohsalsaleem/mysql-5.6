/*
   Copyright (C) 2009 Sun Microsystems Inc.
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

package com.mysql.clusterj.jpatest.model;

public abstract class LongLongStringConstants {

    /** The modulus used to create keys */
    static final int PK_MODULUS = 3;

    /** A large number for creating long values */
    static final long PRETTY_BIG_NUMBER = 1000000000000000L;

    protected static long getPK1(int index) {
        return PRETTY_BIG_NUMBER * ((index / PK_MODULUS / PK_MODULUS) % PK_MODULUS);
    }

    protected static long getPK2(int index) {
        return PRETTY_BIG_NUMBER * ((index / PK_MODULUS) % PK_MODULUS);
    }

    protected static String getPK3(int index) {
        return "" + (index % PK_MODULUS);
    }

    protected static String getValue(int index) {
        return "Value " + index;
    }

}

