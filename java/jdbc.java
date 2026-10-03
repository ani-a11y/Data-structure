// import java.sql.*;
// public class jdbc {

//     public static void main(String[] args) {
//         String url  = "jdbc:mysql://localhost:3306/jdbc";
//         String username = "root";
//         String password = "Anirudh@9554";
//         try{
//         Class.forName("com.mysql.cj.jdbc.Driver");
//         System.out.println("drivers loaded succesfully");
//         } catch(ClassNotFoundException e){
// System.out.println(e.getMessage());
//         }

//         try{
//             Connection con = DriverManager.getConnection(url , username , password);
//         System.out.println("connection establish successfully");
//         } catch(SQLException e){
//             System.out.println(e.getMessage());
//         }
//     }
// }


import java.sql.*;

public class Jdbc {

    public static void main(String[] args) {

        String url = "jdbc:mysql://localhost:3306/jdbc";
        String username = "root";
        String password = "Anirudh@9554";

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            System.out.println("Driver loaded successfully");

            Connection con = DriverManager.getConnection(url, username, password);

            System.out.println("Connection established successfully");

            con.close();

        } catch (ClassNotFoundException e) {
            System.out.println("Driver not found");
            e.printStackTrace();

        } catch (SQLException e) {
            System.out.println("Connection failed");
            e.printStackTrace();
        }
    }
}