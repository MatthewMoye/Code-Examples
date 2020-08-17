using System;

namespace TimeAndDate {
    public class App {
        static void Main(string[] args) {
            var time_date = DateTime.Now;
            string date = time_date.ToString("MM/dd/yyyy");
            string time = time_date.ToString("hh:mm:ss");
            Console.WriteLine("Date: " + date + "\nTime: " + time);
        }
    }
}