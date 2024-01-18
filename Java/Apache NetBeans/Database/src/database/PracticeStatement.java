package database;

import java.sql.*;
import java.util.*;

public class PracticeStatement {
    
    public static void main(String[] args) throws Exception{
        Class.forName("org.sqlite.JDBC");
        Connection con = DriverManager.getConnection("jdbc:sqlite:C://sqlite//univ.db");
        PreparedStatement stm = con.prepareStatement("select * from students where deptno = ?");
        
        Scanner input = new Scanner(System.in);
        System.out.print("Enter department number = ");
        int dno = input.nextInt();
        stm.setInt(1, dno);
        ResultSet rs = stm.executeQuery();
        
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
