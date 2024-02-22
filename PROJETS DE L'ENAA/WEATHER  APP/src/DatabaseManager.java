import java.net.URL;
import java.sql.*;
import java.util.*;
public class DatabaseManager {
     private static final String URL = "jdbc:mysql://localhost/meteo";
     private static final String USERNAME = "imane";
     private static final String PASSWORD = "1234";


     public  static Connection getConnection() throws SQLException {
          return DriverManager.getConnection(URL, USERNAME, PASSWORD);
    }

     public static List<City> getAllcities() throws SQLException {
          List<City> cities = new ArrayList<>();
          String sql ="SELECT *FROM City" ;
          Connection connection = getConnection();
          PreparedStatement statement = connection.prepareStatement(sql);
          ResultSet resultSet = statement.executeQuery();
          while (resultSet.next()) {
               int cityId = resultSet.getInt("cityId");
               String cityName = resultSet.getString("cityName");
               int currentTemperature = resultSet.getInt("currentTemperature");
               int currentHumidity = resultSet.getInt("currentHumidity");
               int currentwindSpeed = resultSet.getInt("currentwindSpeed");
               cities.add(new City(cityId, cityName, currentTemperature,currentHumidity,currentwindSpeed));
          }
          connection.close();
          statement.close();
          resultSet.close();
          return cities;
     }
//     public static List< CityHistory> getAllHistorycities() throws SQLException{
//          List<CityHistory> cityHistories = new ArrayList<>();
//          String sql ="SELECT * FROM CityHistory" ;
//          Connection connection =getConnection();
//          PreparedStatement statement = connection.prepareStatement(sql);
//          ResultSet resultSet= statement.executeQuery();
//          while (resultSet.next()) {
//               int historicalDataId = resultSet.getInt("historicalDataId");
//               int cityId = resultSet.getInt("cityId");
//               String eventDate = resultSet.getString("eventDate");
//               int temperature = resultSet.getInt("temperature");
//               cityHistories.add(new CityHistory(historicalDataId, cityId, eventDate, temperature));
//          }
//          connection.close();
//          statement.close();
//          resultSet.close();
//          return cityHistories;
//          }
     }







