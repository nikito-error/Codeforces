import java.util.ArrayList;
import java.util.Scanner;

public class C_ClockAndStrings {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int a = scanner.nextInt();
			int b = scanner.nextInt();
			int c = scanner.nextInt();
			int d = scanner.nextInt();

			int othera = a;
			int otherb = b;
			int otherc = c;
			int otherd = d;
			if (a == 12) {
				othera = 0;
			} else if (b == 12) {
				otherb = 0;
			} else if (c == 12) {
				otherc = 0;
			} else if (d == 12) {
				otherd = 0;
			}

			if (a - b == 1 || c - d == 1) {
				System.out.println("NO");
				continue;
			}

			if (othera - otherb == 1 || otherc - otherd == 1) {
				System.out.println("NO");
				continue;
			}

			ArrayList<Integer> arr1 = new ArrayList<Integer>();
			ArrayList<Integer> arr2 = new ArrayList<Integer>();
			if (a > b) {
				for (int i = b + 1; i < a; i++) {
					arr1.add(i);
				}

				for (int i = a + 1; i <= 12; i++) {
					arr2.add(i);
				}

				for (int i = 1; i <= b; i++) {
					arr2.add(i);
				}

			} else {
				for (int i = a + 1; i < b; i++) {
					arr1.add(i);
				}

				for (int i = b + 1; i <= 12; i++) {
					arr2.add(i);
				}

				for (int i = 1; i < a; i++) {
					arr2.add(i);
				}
			}

			boolean bflagFindCA = false;
			boolean bflagFindDA = false;
			boolean bflagFindDB = false;
			boolean bflagFindCB = false;

			for (int i = 0; i < arr1.size(); i++) {
				if (c == arr1.get(i)) {
					bflagFindCA = true;
				} else if (d == arr1.get(i)) {
					bflagFindDB = true;
				}
			}

			for (int i = 0; i < arr2.size(); i++) {
				if (c == arr2.get(i)) {
					bflagFindCB = true;
				} else if (d == arr2.get(i)) {
					bflagFindDA = true;
				}
			}

			if (bflagFindCA == true && bflagFindDA == true) {
				System.out.println("YES");
			} else if (bflagFindCB == true && bflagFindDB == true) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}

}