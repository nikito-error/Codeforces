import java.util.Scanner;

public class Round_938_A {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		for (int testcases = 0; testcases < t; testcases++) {
			int n = scanner.nextInt();
			int a = scanner.nextInt();
			int b = scanner.nextInt();
			int price = 0;
			int total = 0;

			if (2 * a <= b) {
				for (int i = 0; i < n; i++) {
					total += a;
				}

			} else if (2 * a > b) {
				if (n % 2 == 0) {
					for (int j = 0; j < n / 2; j++) {
						total += b;
					}
				} else {
					n = n - 1;
					for (int j = 0; j < n / 2; j++) {
						total += b;
					}

					total += a;
				}

			}

			System.out.println(total);
		}
	}
}
