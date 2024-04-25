import java.util.Scanner;

public class B_VladAndShapes_Round928_Div4 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int cnt = 0;
			int next = 0;
			int shano = 0;
			boolean isTriangle = false;
			boolean isSquare = false;
			for (int i = 0; i < n; i++) {
				String s = scanner.next();
				for (int j = 0; j < s.length(); j++) {
					if (s.charAt(j) == '1') {
						cnt++;
					}
				}

				if (next > 0 && cnt > 0 && shano == 1) {
					if (cnt != next) {
						isTriangle = true;
					} else {
						isSquare = true;
					}
				}

				if (cnt > 0) {
					next = cnt;
					cnt = 0;
					shano = 1;
				}
			}
			if (isTriangle) {
				System.out.println("TRIANGLE");
			} else {
				System.out.println("SQUARE");
			}
		}
	}
}
