package database;

import java.sql.*;

public class DDLoperations {
    
    public static void main(String[] args) throws Exception{
        Class.forName("org.sqlite.JDBC");
        Connection con = DriverManager.getConnection("jdbc:sqlite:C://sqlite//univ.db");
        Statement stm = con.createStatement();
        
        stm.executeUpdate("create table temp(a integer, b float)");
        stm.executeUpdate("drop table temp");
        
        stm.close();
        con.close();
    }
    
}
