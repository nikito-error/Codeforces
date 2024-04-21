import java.util.ArrayList;
import java.util.Scanner;

public class B_929_Round_Div3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		for (int testcases = 0; testcases < t; testcases++) {
			int n = scanner.nextInt();
			int sum = 0;
			ArrayList<Integer> arr = new ArrayList<Integer>();
			for (int i = 0; i < n; i++) {
				int a = scanner.nextInt();
				arr.add(a);
				sum += a;
			}

			if (sum % 3 == 0) {
				System.out.println(0);
				continue;
			}

			int cnt = 0;
			for (int i = 0; i < arr.size(); i++) {
				if ((sum - arr.get(i)) % 3 == 0) {
					cnt++;
					System.out.println(1);
					break;
				}
			}

			if (cnt == 1) {
				continue;
			}

			if ((sum + 1) % 3 == 0) {
				System.out.println(1);
				continue;
			}

			cnt = 0;
			for (int i = 0; i < arr.size(); i++) {
				if (((sum - arr.get(i)) + 1) % 3 == 0) {
					cnt++;
					cnt++;
					System.out.println(2);
					break;
				}
			}

			if (cnt == 2) {
				continue;
			}
		}
	}
}
