/*C++ for time limit
 #include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int testcases = 0; testcases < t; testcases++) {
        int n;
        cin >> n;
        set<int> mySet;
        int cnt = 0;

        for (int ni = 0; ni < n; ni++) {
            int a;
            cin >> a;
            if (mySet.count(a)) {
                cnt++;
            } else {
                mySet.insert(a);
            }
        }

        cout << cnt << endl;
        mySet.clear();
    }

    return 0;
}
 */

import java.util.ArrayList;
import java.util.Scanner;

public class B_NeneAndTheCardGame {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		ArrayList<Integer> myArr = new ArrayList<Integer>();
		for (int testcases = 0; testcases < t; testcases++) {
			int n = scanner.nextInt();
			int cnt = 0;
			for (int ni = 0; ni < n; ni++) {
				int a = scanner.nextInt();
				if (myArr.contains(a)) {
					cnt++;
				} else {
					myArr.add(a);
				}
			}

			System.out.println(cnt);
			myArr.clear();
		}
	}
}
