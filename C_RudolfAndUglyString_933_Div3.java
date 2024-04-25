import java.util.Scanner;

public class C_RudolfAndUglyString_933_Div3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			String s = scanner.next();
			int cnt = 0;
			for (int i = 0; i < n - 2; i++) {
				if (s.charAt(i) == 'm' && s.charAt(i + 1) == 'a' && s.charAt(i + 2) == 'p') {
					cnt++;
					i += 2;
				} else if (s.charAt(i) == 'p' && s.charAt(i + 1) == 'i' && s.charAt(i + 2) == 'e') {
					cnt++;
					i += 2;
				}
			}
			System.out.println(cnt);

		}
	}
}
