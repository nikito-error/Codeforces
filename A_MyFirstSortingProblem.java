import java.util.Scanner;

public class A_MyFirstSortingProblem {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		for (int i = 0; i < t; i++) {

			int x = scanner.nextInt();
			int y = scanner.nextInt();

			if (x <= y) {
				System.out.println(x + " " + y);
			} else {
				System.out.println(y + " " + x);
			}
		}
	}
}
