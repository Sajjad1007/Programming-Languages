package database;

import java.sql.*;

public class Database {

    public static void main(String[] args) throws Exception{
        Class.forName("org.sqlite.JDBC"); //Driver available
        Connection con = DriverManager.getConnection("jdbc:sqlite:C://sqlite//univ.db"); //established connection
        Statement stm = con.createStatement(); //statement created
        ResultSet rs = stm.executeQuery("select * from students"); //Query executed
        
        while(rs.next()){
            System.out.print(rs.getInt("roll") + " ");
            System.out.print(rs.getString("name") + " ");
            System.out.print(rs.getString(3) + " ");
            System.out.println(rs.getInt(4));
        }
        
        stm.close();
        con.close();
    }
    
}
