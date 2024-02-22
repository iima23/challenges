import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class Menu {
    private City city;
    private CityHistory cityHistory;

    public Menu(City city, CityHistory cityHistory) {
        this.city = city;
        this.cityHistory = cityHistory;
    }

    public void showMenu() {
        Scanner scanner = new Scanner(System.in);
        int option;
        do {
            System.out.println("MENU:");
            System.out.println("1. Add city");
            System.out.println("2. Read all cities");
            System.out.println("3. Read city history");
            System.out.println("4. Exit");
            System.out.println("Choose an option:");

            option = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (option) {
                case 1:
                    // Ajouter une ville (à implémenter)
                    break;
                case 2:
                    // Lire toutes les villes
                    try {
                        ResultSet resultSet = city.readAllCities();
                        while (resultSet.next()) {
                            int cityId = resultSet.getInt("cityId");
                            String cityName = resultSet.getString("cityName");
                            int currentTemperature = resultSet.getInt("currentTemperature");
                            int currentHumidity = resultSet.getInt("currentHumidity");
                            int currentwindSpeed = resultSet.getInt("currentWindSpeed");

                            System.out.println("City ID: " + cityId);
                            System.out.println("City Name: " + cityName);
                            System.out.println("Temperature: " + currentTemperature);
                            System.out.println("Humidity: " + currentHumidity);
                            System.out.println("Wind Speed: " + currentwindSpeed);
                            System.out.println();
                        }
                    } catch (SQLException e) {
                        e.printStackTrace();
                    }
                    break;
                case 3:
                    // Lire l'historique de la ville
                    System.out.println("Enter city ID to view history:");
                    int cityId = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    try {
                        ResultSet historyResultSet = cityHistory.readAllHistoryForCity(cityId);
                        while (historyResultSet.next()) {
                            int historicalDataId = historyResultSet.getInt("historicalDataId");
                            String eventDate = historyResultSet.getString("eventDate");
                            int temperature = historyResultSet.getInt("temperature");

                            System.out.println("Historical Data ID: " + historicalDataId);
                            System.out.println("Event Date: " + eventDate);
                            System.out.println("Temperature: " + temperature);
                            System.out.println();
                        }
                    } catch (SQLException e) {
                        e.printStackTrace();
                    }
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid option. Please try again.");
                    break;
            }
        } while (option != 4);
    }
}
