import java.util.Scanner;

public class A_MakeItWhite {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			String s = scanner.next();
			int firstindex = -1;
			int lastindex = 0;
			for (int i = 0; i < n; i++) {
				if (s.charAt(i) == 'B') {
					if (firstindex == -1) {
						firstindex = i;
					}

					lastindex = i;
				}
			}

			System.out.println(lastindex - firstindex + 1);
		}
	}
}
