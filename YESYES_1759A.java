package solutions;

import java.util.Scanner;

public class YESYES_1759A {
	static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		long t = scanner.nextLong();
		for (long i = 0; i < t; i++) {
			String f = scanner.next();
			String p = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
			if (p.contains(f)) {
				System.out.println("Yes");
			} else {
				System.out.println("No");
			}

		}
	}
}