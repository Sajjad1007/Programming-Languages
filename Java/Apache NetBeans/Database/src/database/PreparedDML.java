package database;

import java.sql.*;
import java.util.*;

public class PreparedDML {
    
    public static void main(String[] args) throws Exception{
        Class.forName("org.sqlite.JDBC");
        Connection con = DriverManager.getConnection("jdbc:sqlite:C://sqlite//univ.db");
        PreparedStatement stm = con.prepareStatement("insert into students values(?, ?, ?, ?)");
        
        Scanner input = new Scanner(System.in);
        System.out.print("Enter student data : ");
        int roll = input.nextInt();
        String name = input.next();
        String city = input.next();
        int dno = input.nextInt();
        
        stm.setInt(1, roll);
        stm.setString(2, name);
        stm.setString(3, city);
        stm.setInt(4, dno);
        
        stm.executeUpdate();
        
        stm.close();
        con.close();
    }
    
}
