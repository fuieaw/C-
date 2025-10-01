package ch04.sec05;

import java.util.Scanner;

public class BankingExample {

	public static void main(String[] args) {
		 try (Scanner scanner = new Scanner(System.in)) {
			boolean num = true;
	        int balance = 0;

	        while (num) {
	            System.out.println("----------------------------");
	            System.out.println("1.예금 | 2.출금 | 3.잔고 | 4.종료");
	            System.out.println("----------------------------");
	            System.out.print("선택> ");

	            String menu = scanner.nextLine();

	            if (menu.equals("1")) {
	                System.out.print("예금액> ");
	                int money = Integer.parseInt(scanner.nextLine());
	                balance += money;
	            } else if (menu.equals("2")) {
	                System.out.print("출금액> ");
	                int money = Integer.parseInt(scanner.nextLine());
	                balance -= money;
	            } else if (menu.equals("3")) {
	                System.out.println("잔고> " + balance);
	            } else if (menu.equals("4")) {
	                num = false;
	            }
	        }
		 } catch (NumberFormatException e) {
			e.printStackTrace();
		 }
	        System.out.println("프로그램 종료");
	    }

	}


