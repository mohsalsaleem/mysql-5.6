/*
 *  Copyright (C) 2009 Sun Microsystems, Inc.
 *  All rights reserved. Use is subject to license terms.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
 */

package com.mysql.clusterj.bindings;

import com.mysql.cluster.ndbj.NdbIndex;
import com.mysql.clusterj.core.store.Index;
import com.mysql.clusterj.core.util.I18NHelper;
import com.mysql.clusterj.core.util.Logger;
import com.mysql.clusterj.core.util.LoggerFactoryService;

/**
 *
 */
class IndexImpl implements Index {

    /** My message translator */
    static final I18NHelper local = I18NHelper
            .getInstance(ClusterTransactionImpl.class);

    /** My logger */
    static final Logger logger = LoggerFactoryService.getFactory()
            .getInstance(ClusterTransactionImpl.class);

    private NdbIndex ndbIndex;

    private String name;

    public IndexImpl(NdbIndex index, String name) {
        this.ndbIndex = index;
        this.name = name;
    }

    public boolean isHash() {
        return NdbIndex.Type.UniqueHashIndex == ndbIndex.getType();
    }

    public boolean isUnique() {
        return NdbIndex.Type.UniqueHashIndex == ndbIndex.getType();
    }

    public String getName() {
        return name;
    }

}
