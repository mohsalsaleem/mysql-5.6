package testsuite.clusterj.model;

import com.mysql.clusterj.annotation.Lob;
import com.mysql.clusterj.annotation.PersistenceCapable;
import com.mysql.clusterj.annotation.PrimaryKey;

@PersistenceCapable(table="charsetutf8")
public interface CharsetUtf8 extends CharsetModel {

    @PrimaryKey
    public int getId();
    public void setId(int id);

    public String getSmallColumn();
    public void setSmallColumn(String value);

    public String getMediumColumn();
    public void setMediumColumn(String value);

    @Lob
    public String getLargeColumn();
    public void setLargeColumn(String value);
    
}
