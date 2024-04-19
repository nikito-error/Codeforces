import java.util.Scanner;

public class Painting_the_Ribbon {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			int k = scanner.nextInt();

			if (m == 1) {
				System.out.println("NO");
				continue;
			}
			int s = 0;
			if (n % m == 0) {
				s = n / m;
			} else {
				s = (int) Math.ceil((double) n / m);
			}
			if (n - s > k) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
		scanner.close();
	}
}
