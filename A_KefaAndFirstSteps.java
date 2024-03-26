import java.util.Scanner;

public class A_KefaAndFirstSteps {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int b = 0;
		int iprev = 0;
		int cnt = 0;
		int total = 0;
		for (int i = 0; i < n; i++) {
			int a = scanner.nextInt();
			if (b > 0) {
				if (a >= b) {
					cnt++;
				} else {
					if (total <= cnt) {
						total = cnt + 1;
					}
					cnt = 0;
				}
			}
			b = a;
			iprev = i + 1;
		}
		if (total == 0 || total <= cnt) {
			total = cnt + 1;
		}

		System.out.println(total);
	}
}
