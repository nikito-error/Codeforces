/* optimized C++ time limit

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        string s, s1;
        cin >> s >> s1;
        int cnt = 0;
        int zz = 0;
        int nexti = INT_MAX;
        int nextj = INT_MAX;
        bool shouldBreak = false; 
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                break;
            }
            for (int j = zz; j < m; j++) {
                if (i == nexti && j == nextj) {
                    shouldBreak = true; /
                    break;
                }

                if (s[i] == s1[j]) {
                    zz = j + 1;
                    i = i + 1;
                    cnt++;
                } else {
                    nexti = i;
                    nextj = j;
                }
            }
            if (shouldBreak) {
                break; 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
 */

import java.util.Scanner;

public class B_Prefiquence {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			String s = scanner.next();
			String s1 = scanner.next();
			int cnt = 0;
			int j;
			int zz = 0;
			int kk = 1;
			int nexti = Integer.MAX_VALUE;
			int nextj = Integer.MAX_VALUE;
			for (int i = kk; i <= s.length(); i++) {
				if (i > 1) {
					break;
				}
				i--;
				try {
					for (j = zz; j < s1.length(); j++) {
						if (i == nexti && j == nextj) {
							throw new Exception();
						}

						if (s.charAt(i) == s1.charAt(j)) {
							zz = j + 1;
							i = i + 1;
							cnt++;
						} else {
							nexti = i;
							nextj = j;
						}
					}
				} catch (Exception e) {
					break;
				}
			}
			System.out.println(cnt);
		}
	}
}
