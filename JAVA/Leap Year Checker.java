// Leap Year Checker

import java.util.Scanner;

class LeapYearChecker {

    public boolean isLeapYear(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    public void displayResult(int year) {
        if (isLeapYear(year)) {
            System.out.println(year + " is a Leap Year");
        } else {
            System.out.println(year + " is Not a Leap Year");
        }
    }

}

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter year: ");
        int year = sc.nextInt();

        LeapYearChecker checker = new LeapYearChecker();

        checker.displayResult(year);

        sc.close();
    }

}