package solutions;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class LostPermutation_1759B {
	static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		Set<Integer> p = new HashSet<Integer>();
		long t = scanner.nextLong();
		for (long i = 0; i < t; i++) {
			int br = 1;
			int br1 = 1;
			int m = scanner.nextInt();
			int s = scanner.nextInt();
			for (int k = 0; k < m; k++) {
				int b = scanner.nextInt();
				p.add(b);
			}
			for (int d = 0; d < 2000; d++) {
				if (p.contains(br)) {

				} else {
					s = s - br;
					p.add(br);
				}
				br++;
				if (s == 0) {
					for (;;) {
						if (p.contains(br1)) {
							p.remove(br1);
						} else {
							if (p.isEmpty()) {
								System.out.println("Yes");
								break;
							} else {
								System.out.println("No");
								break;
							}
						}
						br1++;
					}
					break;
				} else if (s < 0) {
					System.out.println("No");
					break;
				}
			}
			p.clear();
		}
	}
}
