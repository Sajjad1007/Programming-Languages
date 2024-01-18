package database;

import java.sql.*;

public class DMLoperations {
    
    public static void main(String[] args) throws Exception{
        Class.forName("org.sqlite.JDBC");
        Connection con = DriverManager.getConnection("jdbc:sqlite:C://sqlite//univ.db");
        Statement stm = con.createStatement();
        
        //stm.executeUpdate("insert into dept values(60, 'Chem')");
        //stm.executeUpdate("delete from dept where deptno >= 60");
        //stm.executeUpdate("update dept set dname = 'ME' where deptno = 40");
        
        stm.close();
        con.close();
    }
    
}
