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

package testsuite.clusterj;

import testsuite.clusterj.model.Employee;

public class UpdateTest extends AbstractClusterJModelTest {

    private static final int NUMBER_TO_INSERT = 4;
    
    @Override
    public void localSetUp() {
        createSessionFactory();
        session = sessionFactory.getSession();
        tx = session.currentTransaction();
        tx.begin();
        session.deletePersistentAll(Employee.class);
        tx.commit();
        createEmployeeInstances(NUMBER_TO_INSERT);
        tx.begin();
        session.makePersistentAll(employees);
        tx.commit();
        addTearDownClasses(Employee.class);
    }

    public void testUpdate() {
        tx.begin();
        for (int i = 0; i < NUMBER_TO_INSERT; ++i) {
            Employee e = session.find(Employee.class, i);
            // change age 
            e.setAge(NUMBER_TO_INSERT - i);
            // send the change to the database
            session.updatePersistent(e);
        }
        tx.commit();
        
        // now verify that the changes were committed
        tx.begin();
        for (int i = 0; i < NUMBER_TO_INSERT; ++i) {
            Employee e = session.find(Employee.class, i);
            // verify age 
            int expected = NUMBER_TO_INSERT - i;
            int actual = e.getAge();
            if (expected != actual) {
                error("Failed update: for employee " + i
                        + " expected age " + expected
                        + " actual age " + actual);
            }
        }
        tx.commit();
        failOnError();
    }
}
