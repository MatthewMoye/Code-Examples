import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class DateTime {
    public static void main(String[] args) {
        LocalDateTime local_time = LocalDateTime.now();
        String date = local_time.format(DateTimeFormatter.ofPattern("MM/dd/yyyy"));
        String time = local_time.format(DateTimeFormatter.ofPattern("HH:mm:ss"));
        System.out.print("Date: " + date + "\nTime: " + time);
    }
}