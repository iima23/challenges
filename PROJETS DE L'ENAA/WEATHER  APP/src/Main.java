import java.sql.SQLException;
public class Main {
    public static void main(String[] args) {
        City city = new City();
        CityHistory cityHistory = new CityHistory();
        Menu menu = new Menu(city, cityHistory);
        menu.showMenu();
    }
}
