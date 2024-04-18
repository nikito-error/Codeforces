import java.util.ArrayList;
import java.util.Scanner;

public class Round_939_Div2_A {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		for (int testcases = 0; testcases < t; testcases++) {
			int k = scanner.nextInt();
			int q = scanner.nextInt();
			ArrayList<Integer> arr = new ArrayList<Integer>();
			for (int kk = 0; kk < k; kk++) {
				int kk1 = scanner.nextInt();
				arr.add(kk1);
			}

			for (int qq = 0; qq < q; qq++) {
				int qq1 = scanner.nextInt();
				int cnt = qq1;
				int next = qq1;

				for (int qq2 = 0; qq2 < qq1; qq2++) {
					for (int i = 0; i < k; i++) {
						if (qq1 >= arr.get(i)) {
							cnt--;
						}
					}
					if (next != cnt) {
						qq2 = -1;
					} else {
						break;
					}

					qq1 = cnt;
					next = cnt;
				}

				System.out.println(qq1);
			}

		}
	}
}
