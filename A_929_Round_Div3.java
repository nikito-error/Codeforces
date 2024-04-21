import java.util.Scanner;

public class A_929_Round_Div3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		for (int testcases = 0; testcases < t; testcases++) {
			int n = scanner.nextInt();
			int sum = 0;
			for (int i = 0; i < n; i++) {
				int a = scanner.nextInt();
				if (a < 0) {
					a = a * -1;
				}

				sum += a;
			}
			System.out.println(sum);
		}
	}
}
